#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
 
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans = 0;
        for(ll i=30;i>=0;i--){
            ll cnt = 0;
            for(ll j=0;j<n;j++){
                if(a[j]>=pow(2,i) and a[j]<pow(2,(i+1)))
                    ++cnt;
            }
            ans+= (cnt*(cnt-1))/2;
        }
        cout<<ans<<endl;
    }
}