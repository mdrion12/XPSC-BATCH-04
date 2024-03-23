#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>v(a),t(b);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>t[i];
    }
    int l=0,r=0;
    long long ans=0;
    while (l<a && r<b)
    {
        int cnt1=0,cnt2=0,curr=v[l];
        while (v[l]==curr && l<a)
        {
           cnt1++;
           l++; 
        }
        while (t[r]<curr && r<b)
        {
           r++;
        }
        
        while (t[r]==curr && r<b)
        {
            cnt2++;
            r++;
        }
        
        ans+=(1LL*cnt1*cnt2);

    }
    cout<<ans<<"\n";
    
    return 0;
}