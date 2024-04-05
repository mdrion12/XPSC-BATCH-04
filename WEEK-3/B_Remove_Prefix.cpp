#include<bits/stdc++.h>
#define     ll              long long int
#define     IOS             ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 
#define     TST             cin>>t; while(t--) 
#define     mmp             map<ll,ll>mp;
using namespace std;
int main()
{
    IOS
 
    ll t,x,i,j,k,p,s;
 
    TST
    {
        cin>>x;
        ll n[x];
        mmp;
 
        s=0;
        for(i=0;i<x;i++)
        {
            cin>>n[i];
        }
 
        for(i=x-1;i>=0;i--)
        {
            if(mp[n[i]]==0) s++;
            else break;
 
             mp[n[i] ]++;
        }
 
        cout<<x-s<<endl;
 
    }
 
}
 