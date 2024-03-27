#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    long long b;
    cin>>a>>b;
    vector<int>v(a);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    long long sum=0;
    int ans=0;
    int l=0,r=0;
    while(r<a)
    {
        sum+=v[r];
        if(sum<=b)
        {
            ans=max(ans,r-l+1);
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<"\n";
    return 0;
}