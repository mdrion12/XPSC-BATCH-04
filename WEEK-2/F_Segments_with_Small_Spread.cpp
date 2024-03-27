#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    multiset<long long>mp;
     long long l = 0, r = 0, ans = 0, sum = 0;
    while(r<n)
    {
     mp.insert(a[r]);
     long long mn,mx;
     mn=*mp.begin();
     mx=*mp.rbegin();
     if(mx-mn<=s)
     {
        ans+=r-l+1;
     }
     else
     {
        while (l<r)
        {
           mn = *mp.begin(), mx = *mp.rbegin();
                if ((mx - mn) <= s) {
                    break;
                }
                auto it = mp.find(a[l]);
                mp.erase(it);
                l++;
        }
           mn = *mp.begin(), mx = *mp.rbegin();
           if((mx - mn) <= s)
           {
            ans+=r-l+1;
           }
     }
     r++;
    }
    cout<<ans<<"\n";

    return 0;
}