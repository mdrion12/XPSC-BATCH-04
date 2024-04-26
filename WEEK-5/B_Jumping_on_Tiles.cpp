#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        vector<pair<char,int>> p(n);
        for(int i = 0; i < n; i++) {
            p[i].first = s[i];
            p[i].second = i + 1;
        }

        char x = s[0];
        char y = s[n - 1];
        if(x > y) {
            sort(p.begin() + 1, p.end() - 1, greater<pair<char, int>>());
        } else {
            sort(p.begin() + 1, p.end() - 1);
        }

        int sum = 0, count = 1;
        vector<int> v;
        v.push_back(p[0].second);
        for(int i = 1; i < n; i++) {
            if(p[i].first >= min(x, y) && p[i].first <= max(x, y)) {
                sum += abs((abs(p[i - 1].first - 96) + 1) - (abs(p[i].first - 96) + 1));
                v.push_back(p[i].second);
                count++;
            }
        }  

        cout << sum << " " << count << "\n";
        for(int it : v) {
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}
