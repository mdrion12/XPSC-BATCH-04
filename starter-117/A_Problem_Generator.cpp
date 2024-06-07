#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        
        
        unordered_map<char, int> freq;
        for (char c : a) {
            freq[c]++;
        }
        
       
        int needed_problems = 0;
        for (char c = 'A'; c <= 'G'; ++c) {
            int required = m; 
            if (freq[c] < required) {
                needed_problems += (required - freq[c]);
            }
        }
        
        cout << needed_problems << endl;
    }
    return 0;
}
