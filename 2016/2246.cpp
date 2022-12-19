#include <bits/stdc++.h>
#define MAX 205

using namespace std;

int h,l,mos[MAX][MAX];

bool dentro(int i, int j)
{
    return i>=0 && i<h && j>=0 && j<l;
}

int busca(int i, int j, int cor)
{
    if(dentro(i,j) && mos[i][j]==cor)
    {
        mos[i][j]=-1;
        return 1 + busca(i+1,j,cor) + busca(i,j+1,cor) + busca(i-1,j,cor) + busca(i,j-1,cor);
    }
    else return 0;
}

int main()
{
    
    cin >> h >> l;
    
    int menor=h*l;
    
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<l;j++)
        {
            cin >> mos[i][j];
        }
    }
    
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(mos[i][j]>=0) menor = min(menor,busca(i,j,mos[i][j]));
        }
    }
    
    cout << menor << endl;
}