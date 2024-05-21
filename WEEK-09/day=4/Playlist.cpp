#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }
    int l = 0, r = 0, ans = 0;
    set<int> s;
    while (r < a) {
        if (s.find(v[r]) == s.end()) {
            s.insert(v[r]);
            ans = max(ans, r - l + 1);
            r++;
        } else {
            s.erase(v[l]);
            l++;
        }
    }
    cout << ans << "\n";
    return 0;
}
