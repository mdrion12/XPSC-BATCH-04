#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        vector<ll> v(a);
        for(ll i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        bool found = false;
        for(ll i = 0; i < a - 1; i++)
        {
            for(ll j = i + 1; j < a; j++)
            {
                if((v[i] & v[j]) == b)
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                break;
            }
        }
        if(found)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
