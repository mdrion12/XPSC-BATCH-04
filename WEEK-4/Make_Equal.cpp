#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a;
        cin >> a;
        vector<int> v(a);
        int small=INT_MAX;
        for (int i = 0; i < a; i++) {
            cin >> v[i];
            small=min(small,v[i]);
        }
        if(a==1)
        {
         cout<<"YES"<<"\n";
        }
         else if(v[0]==v[a-1] && v[0]==small && v[a-1]==small )
         {
            cout<<"YES"<<"\n"; 
         }
         else
         {
            cout<<"NO"<<"\n";
         }
      
    }
    
    return 0;
}
