#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        vector<int>v(x);
        for(int i=0;i<x;i++)
        {
            cin>>v[i];
        }

        auto ok=[&](long long mid)
        {
            long long total=0;
            for(int i=0;i<x;i++)
            {
              if(v[i] < mid) 
              {
			total+= mid - v[i];
		      }
            }
            return total<=y;
        };
        int l=0,r=1e18;
        int mid,ans=0;
        while(l<=r)
        {
         mid=l+(r-l)/2;
         if(ok(mid))
         {
          ans=mid;
          l=mid+1;
         }
         else
         {
            r=mid-1;
         }
        }
        cout<<ans<<"\n";

    }
    return 0;
}