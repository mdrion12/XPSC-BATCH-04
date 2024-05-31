#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
   
        vector<vector<char>> v(x, vector<char>(y));
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> v[i][j];
            }
        }
       
       string s="vika";
       int l=0;
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                 if(v[j][i]==s[l])
                 {
                  l++;
                  break;
                 }
            }
        }
        if(l==4)
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