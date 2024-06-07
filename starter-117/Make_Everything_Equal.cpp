#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
     int a,b;
    cin>>a>>b;
    map<int,int>mp;
    for(int i=0;i<a;i++)
    {
        int v;
        cin>>v;
        mp[v]++;
    }
    int maxm=INT_MIN;
    for(auto it:mp)
    {
    maxm=max(maxm,it.second);
    }
    int r=a-maxm;
    if(r<=b)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
   }
    return 0;
}