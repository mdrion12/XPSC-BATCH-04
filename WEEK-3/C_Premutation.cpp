#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
     int n;cin>>n;
     unordered_map<int,int>mp;
    vector<vector<int>> v(n, vector<int>(n-1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cin>>v[i][j];
            mp[v[i][j]]++;
        }
    }
    int first=0,sc=0;
     for(auto it:mp)
     {
      if(it.second==1)
      {
        first=it.first;
      }
      if(it.second>1)
      {
        sc=it.first;
      }
     }
    
        for(int j=0;j<=n-1;j++)
        {
           if(first==v[j][n-1])
           {
            for(int i=0;i<=n-1;i++)
            {
             cout<<v[j][i]<<" ";
            }
            cout<<sc<<"\n";
            break;
           }
        }     
    }
    
    return 0;
}