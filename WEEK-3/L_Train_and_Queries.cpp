#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map<int,vector<int>>indx;
        for(int i=0; i<n; i++)
        {
            indx[a[i]].push_back(i);
        }
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            if(indx[a].empty() || indx[b].empty())
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(a==b)
            {
                cout<<"YES"<<endl;
                continue;
            }
            if(indx[a].front() < indx[b].back())
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}