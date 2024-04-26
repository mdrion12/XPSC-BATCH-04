#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int x = 7;
        int sum = 0;
        map<int, int> mp; 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
            sum += v[i];
        }
        
        
        for (int i = 1; i <= 3; i++) {
           if(mp[i] != 0 && k != 0) {
                if (i == 1) {
                    if(mp[i]>k)
                    {
                        sum += (k*6 ) -i; 
                        k=0;
                        
                    }
                   else
                   {
                     sum += (mp[i]*6 ) -i;
                    k -= mp[i];
                    mp[i]=0;
                   } // Fixed this line
                } else if (i == 2) {
                       if(mp[i]>k)
                    {
                        sum += (k*5 ) -i; 
                        k=0;
                         mp[i]-=k;
                    }
                   else
                   {
                     sum += (mp[i]*5 ) -i;
                    k -= mp[i];
                          mp[i]=0;
                   } 
                } else if (i == 3) {
                       if(mp[i]>k)
                    {
                        sum += (k*4 ) -i; 
                        k=0;
                    }
                   else
                   {
                     sum += (mp[i]*4 ) -i;
                    k -= mp[i];
                          mp[i]=0;
                   }  
                }
            }
        }
        cout << sum << "\n"; 
    }
    return 0;
}
