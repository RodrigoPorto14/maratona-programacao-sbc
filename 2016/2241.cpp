#include <bits/stdc++.h>
#define MAX 505

using namespace std;

int mudaEstado(int atual, int novo)
{
    if(atual==0) return novo;
    if(novo==3 or (atual==1 && novo==2) or (atual==2 && novo==1)) return 3;
    return atual;
}

int main()
{
    int go[MAX][MAX],n,p,l,c;
    
    int pretas=0,brancas=0;
    
    memset(go,0,sizeof go);
    
    cin >> n >> p;
    
    for(int i=1;i<=p*2;i++)
    {
        cin >> l >> c;
        if(i<=p) 
        { 
            go[l][c]=1;
            pretas++;
        }
        else 
        { 
            go[l][c]=2;
            brancas++;
        }
    }
    for(int k=2;k<=n;k++)
    {
        for(int i=1;i<=n-k+1;i++)
        {
            for(int j=1;j<=n-k+1;j++)
            {
                {
                    int estado=0;
                    estado = mudaEstado(estado,go[i][j]);
                    estado = mudaEstado(estado,go[i+1][j]);
                    estado = mudaEstado(estado,go[i][j+1]);
                    estado = mudaEstado(estado,go[i+1][j+1]);
                    
                    if(estado==1)pretas++;
                    if(estado==2)brancas++;
                    go[i][j] = estado;
                }
            }
        }
    }
    
    cout << pretas << ' ' << brancas << endl;
    return 0;
}
