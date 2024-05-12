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
        vector<int>v(a);
        for(auto &it:v)cin>>it;
      auto ok = [&](int mid) {
    int t = b;
    for(int i = 0; i < a; i++) {
        if(mid >= v[i]) { // Chef can win without losing any strength
            continue;
        } else { // Chef needs to defeat the enemy
            t -= v[i];
            if(t <= 0) { // Chef's strength becomes non-positive
                return false;
            }
        }
    }
    return true; // Chef can defeat all enemies
};

        int l=0,r=1e5;
        int mid;
        int ans;
        while(l<=r)
        {
         mid = l + (r - l) / 2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }

        }
        cout<<ans<<"\n";
    }
    return 0;
}