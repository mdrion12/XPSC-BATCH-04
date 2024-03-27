#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>s(a);
    for(int i=0;i<a;i++)
    {
        cin>>s[i];
    }
    int l=0,r=0,ans=0;
    unordered_map<int,int>mp;
    while (r<a)
    {
     mp[s[r]]++;
     if(mp.size()>=b)
     {
        ans+=r-l+1;
     }
     while (mp.size()>b)
     {
      mp[s[l]]--;
      if(mp[s[l]]==0)
      {
        mp.erase(s[l]);
      }
      l++;
     }
     
     r++;
     
    }
    cout<<ans<<"\n";
    
    return 0;
}