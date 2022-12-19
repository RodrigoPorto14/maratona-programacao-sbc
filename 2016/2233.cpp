#include <bits/stdc++.h>

using namespace std;

long long toDecimal(string str)
{
    map<char,int> hexa;
    hexa['0']=0; hexa['1']=1; hexa['2']=2; hexa['3']=3; hexa['4']=4; hexa['5']=5; hexa['6']=6; hexa['7']=7; hexa['8']=8; hexa['9']=9;
    hexa['a']=10; hexa['b']=11; hexa['c']=12; hexa['d']=13; hexa['e']=14; hexa['f']=15;
    
    reverse(str.begin(),str.end());
    
    long long dec=0;
    
    for(int i=0;i<str.size();i++)
    {
        dec+= hexa[str[i]] * pow(16,i);
    }
    
    return dec;
}

string toHexa(long long n)
{
    map<int,char> hexa;
    hexa[0]='0'; hexa[1]='1'; hexa[2]='2'; hexa[3]='3'; hexa[4]='4'; hexa[5]='5'; hexa[6]='6'; hexa[7]='7'; hexa[8]='8'; hexa[9]='9';
    hexa[10]='a'; hexa[11]='b'; hexa[12]='c'; hexa[13]='d'; hexa[14]='e'; hexa[15]='f';
    
    string hex = "";
    while(n>0)
    {
        hex += hexa[n%16];
        n/=16;
    }
    
    reverse(hex.begin(),hex.end());
    
    return hex;
}


int main()
{
    
    long long r,g,b,verdes,azuis,result;
    string rs,gs,bs;
    
    
    cin >> rs >> gs >> bs;
    
    r = toDecimal(rs);
    g = toDecimal(gs);
    b = toDecimal(bs);
    
    verdes = pow((r/g),2);
    azuis = pow((g/b),2)*verdes;
    
    result = verdes+azuis+1;
    
    cout << toHexa(result) << endl;
    
    return 0;
}