#include<bits/stdc++.h>
using namespace std;

void slide(vector<char>&v)
{
  int l = 0, r = 0, n = v.size();
            int ans = 0;
            unordered_map<char,int> mp;
            while(r < n) {
                mp[v[r]]++;
                if(mp.size() <= 1) {
                    ans = max(ans, r - l + 1);
                } else {
                    mp[v[l]]--;
                    if(mp[v[l]] == 0) {
                        mp.erase(v[l]);
                    }
                    l++;
                }
                r++;
            }
             cout << ans << " ";

}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        vector<char> v(a);
        for(int i = 0; i < a; i++) {
            cin >> v[i];
        }
        slide(v);
        while(b--) {
          
           
            char c;
            cin >> c;
            v.push_back(c);
            slide(v);
        }
        cout << "\n";
    }

    return 0;
}
