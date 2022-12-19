#include <bits/stdc++.h>

#define INF 1000000005

using namespace std;

int main()
{
    long long a,b,c,d,r=INF,x;
    
    cin >> a >> b >> c >> d;
    
    for(long long n=1;n<=sqrt(c);n++)
    {
        x = n;
        if(x%a==0 && x%b!=0 && c%x==0 && d%x!=0) r = min(r,x);
        
        x = c/n;
        if(x%a==0 && x%b!=0 && c%x==0 && d%x!=0) r = min(r,x);
    }
    
    if(r==INF) cout << -1 << endl;
    else cout << r << endl;
    
    return 0;
}