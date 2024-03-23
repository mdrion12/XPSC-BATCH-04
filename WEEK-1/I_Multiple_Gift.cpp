#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
        ll x,y,cnt=1; cin>>x>>y;   
    while(x*2<=y) 
    {
        x*=2;
        cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}