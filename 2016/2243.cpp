#include <bits/stdc++.h>
#define MAX 50005

using namespace std;

int main()
{
    int altura[MAX],esq[MAX],dir[MAX],n;
    
    cin >> n;
    
    esq[1]=1;
    dir[n]=1;
    
    int alturaMaxima=1;
    
    for(int i=1;i<=n;i++) cin >> altura[i];
    
    for(int i=2;i<=n;i++) esq[i] = min(altura[i],esq[i-1]+1);
    
    for(int i=n-1;i>=1;i--) dir[i] = min(altura[i],dir[i+1]+1);
    
    for(int i=1;i<=n;i++)
    {
        int alt = min(esq[i],dir[i]);
        alturaMaxima = max(alturaMaxima,alt);
    }
    
    cout << alturaMaxima << endl;

    return 0;
}