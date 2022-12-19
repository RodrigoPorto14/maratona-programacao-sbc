#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a==0 || b==0 || c==0 || a==b || a==c || b==c || a+b==c || a+c==b || b+c==a) cout << 'S' << endl;
    else cout << 'N' << endl;
    
    return 0;
}