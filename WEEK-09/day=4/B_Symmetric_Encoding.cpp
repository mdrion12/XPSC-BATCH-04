#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

     
        string r;
        for (char ch : b) {
            if (r.find(ch) == string::npos) {
                r += ch;
            }
        }
        sort(r.begin(), r.end());

       
        string decoded;
        int len = r.length();
        for (char ch : b) {
            int idx = lower_bound(r.begin(), r.end(), ch) - r.begin();
            char symmetric_char = r[len - idx - 1]; // Symmetric character from r
            decoded += symmetric_char;
        }

        cout << decoded << endl;
    }
    return 0;
}
