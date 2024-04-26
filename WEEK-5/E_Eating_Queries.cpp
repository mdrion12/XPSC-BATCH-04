#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;
        vector<int> v(a);
        
        // Input array
        for(int i = 0; i < a; i++) {
            cin >> v[i];
        }
        
        // Sorting in non-increasing order
        sort(v.begin(), v.end(), greater<int>());
        
        // Calculating prefix sums
        for(int i = 1; i < a; i++) {
            v[i] = v[i] + v[i - 1];
        }
        
        while(b--) {
            int x;
            cin >> x;
            
            // Using lower_bound to find the first element >= x
            auto it = lower_bound(v.begin(), v.end(), x);
            
            if(it != v.end()) {
                // Adding 1 because lower_bound returns an iterator
                // so need to convert it to index
                cout << it - v.begin() + 1 << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
    
    return 0;
}
