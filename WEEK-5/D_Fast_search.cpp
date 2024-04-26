#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int t;cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        auto it1=lower_bound(v.begin(),v.end(),l);
        auto it2=upper_bound(v.begin(),v.end(),r);
        cout<<it2-it1<<" ";
    }
    return 0;
}