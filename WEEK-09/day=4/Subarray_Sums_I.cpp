#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    ll sum = 0, count = 0;
    map<ll, ll> mp;
    mp[sum] = 1;
    
    for (int i = 0; i < a; i++)
    {
        int v;
        cin >> v;
        sum += v;
        if (mp.find(sum - b) != mp.end())
        {
            count += mp[sum - b];
        }
        mp[sum]++;
    }
    
    cout << count << "\n";
    return 0;
}
