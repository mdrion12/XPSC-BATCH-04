#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
            freq[v]++;
        }
        
        int max_freq = INT_MIN;
        for (auto it : freq) {
            max_freq = max(max_freq, it.second);
        }
        if(freq.size()==1)
        {
            cout<<0<<"\n";
            continue;;
        }
        long long sum = 0;
        for (long long i = max_freq * 2; ; i *= 2) {
            if (n == i) {
                sum += i / 2 + 1;
                break;
            }
            if (n < i) {
                sum += n - i / 2 + 1;
                break;
            }
            sum += i / 2 + 1;
        }
        
        cout << sum << "\n";
    }
    
    return 0;
}
