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
        while(b--)
        {
            int l,r;
            cin>>l>>r;
          unordered_map<char,int>mp;
            for(int i=l;i<=r;i++)
            {
                mp[s[i]]++;
            }
            int count=0;
            for(auto it:mp)
            {
                if(it.second%2!=0)
                {
                    count++;
                }
            }
            cout<<count<<"\n";
            mp.clear();
        }
    }
    return 0;
}