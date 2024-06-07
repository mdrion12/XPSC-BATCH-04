#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
      
     ll h,x,y,y2,k;
     cin>>h>>x>>y>>y2>>k;
     ll ans1=0;
     if(h%x!=0)
     {
       ans1=(h/x)+1;
     }
     else
     {
        ans1=h/x;
     }
     ll ans2=0;
     ll result2=y*k;
     if(result2>=h)
     {
      if(h%y!=0)
      {
        ans2=(h/y)+1;
      }
      else
      {
        ans2=h/y;
      }
     }
     else
     {
        h-=k*y;
        if(h%y2!=0)
        {
            ans2=(h/y2)+1;
            ans2+=k;
        }
        else
        {
            ans2=(h/y2);
            ans2+=k;
        }
     }
     cout<<min(ans1,ans2)<<"\n";
    }
    return 0;
}
