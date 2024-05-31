#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
     int cnt=1;
     char last=s[a-1];
     int ans=0;
      vector<int>v;
     for(int i=1;i<a;i++)
     {
      if(s[i]==s[i-1])
      {
        cnt++;
      }
      else
      {
       ans=max(ans,cnt);
       cnt=1;
      }
     }
    ans=max(ans,cnt);
     v.push_back(ans);
     while(b--)
     {
        char c;
        cin>>c;
        if(last==c)
        {
            cnt++;       
        }
        else
        {
            last=c;
            cnt=1;
        }
      ans=max(ans,cnt);
      v.push_back(ans);
     }
     for(auto it:v)
     {
        cout<<it<<" ";
     }
     cout<<"\n";
    }
    return 0;
}