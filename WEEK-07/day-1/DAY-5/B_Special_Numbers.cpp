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
        int ans=0;
        for(int i=0;i<32;i++)
        {
            if((b>>1)&1==1)
            {
             ans+=pow(a,i);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}