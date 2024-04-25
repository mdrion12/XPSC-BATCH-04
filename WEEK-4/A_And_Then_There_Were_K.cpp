#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=1;
        while(ans<=n)
        {
            ans*=2;
        }
        ans/=2;
        ans--;
        cout<<ans<<"\n";
    }
   return 0;
}