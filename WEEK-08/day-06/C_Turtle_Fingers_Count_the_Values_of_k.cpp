#include <bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
vector < ll > divisor(ll n) 
{
    vector < ll > divisors;
    
    for (int i = 1;i * i <= n;i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if ((n / i) != i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}
int main()
{   
  ios;  
    ll t;
    cin>>t;
 
    while(t--) {
        ll a, b, l, comp, cnt = 0;
        cin>>a>>b>>l;
        vector < ll > k = divisor(l);
   
        for(ll i = 0 ; i < (ll)k.size() ; i++) {
            ll f=0;
            for(ll j = 0 ; j <=20; j++) {
                for(ll m = 0 ; m <=20 ; m++) {
                    if(k[i]*pow(a,j)*pow(b,m) == l) {
                        cnt++;
                        f=1;
                        break;
                    }
                }
                if(f==1)
                    break;
            }
        }
 
        cout<<cnt<<endl;
    }
    return 0;     
 }