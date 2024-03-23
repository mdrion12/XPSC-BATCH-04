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
int l=0,r=0,ans=0;
while(r<b)
{
   while (t[r]>v[l] && l<a)
{
    ans++;
    l++;
}
    r++;
    cout<<ans<<" ";
}

    return 0;
}