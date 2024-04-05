#include<bits/stdc++.h>
using namespace std;



string small(const string& s) {
    int n = s.length();
    string result = s;
    for (int i = 0; i <= n - 3; ++i) {
        if (s.substr(i, 3) == "110") {
            result.replace(i, 3, "100");
            break;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << small(s) << endl;
    }
    return 0;
}
