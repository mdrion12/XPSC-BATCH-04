#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int a;
    cin>>a;
    while(a--)
    {
        int x;
        cin>>x;
       auto it=upper_bound(v.begin(),v.end(),x);
       if(it==v.end())
       {
        cout<<v.size()<<"\n";
       }
       else
       {
        cout<<it-v.begin()<<"\n";
       }
    }
    return 0;
}
