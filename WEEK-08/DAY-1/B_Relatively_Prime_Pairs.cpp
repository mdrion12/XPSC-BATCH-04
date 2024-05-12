#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<"YES"<<"\n";
    ll r=a-b+1/2;
    for(ll i=a;i<=b;i+=2)
    {
        cout<<i<<" "<<i+1<<"\n";
    }
    return 0;
}