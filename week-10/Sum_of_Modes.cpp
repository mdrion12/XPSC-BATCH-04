#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {  ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=(n*(n+1))/2;
    map<ll,ll>mp;
    mp[0]++;
    ll sm=0;
    for(ll i=0;i<n;i++)
    {   
        if(s[i]=='0')
        {
            sm--;
        }
        else{
            sm++;
        }
        ans+=(mp[sm]);
        mp[sm]++;
    }
    cout<<ans<<endl;


    }
    return 0;
}