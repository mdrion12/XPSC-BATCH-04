#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   int t;
   cin>>t;
   map<int,int>mp;(1e5+1);
   if(t==1)
   {
    cout<<1<<"\n";
   }
 else
 {
      while(t--)
   {
     int n;
    cin >> n;
    vector<int> divisors;
    for (int i = 1;i * i <= n;i++) {
        if (n % i == 0) {
          mp[i]++;
            if ((n / i) != i) {
             mp[(n/i)]++;
            }
        }
    }
    

   }
   int maximum=1;
   for(auto it:mp)
   {
    if(it.second!=0 && it.first!=1)
    {
       maximum=max(maximum,it.second);
    }
   }
   cout<<maximum<<"\n";
 }
    return 0;
}