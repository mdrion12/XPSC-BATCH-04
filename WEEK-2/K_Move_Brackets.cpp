#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        stack<char> st;
        int moves = 0;
        
        for (int i = 0; i < n; ++i) {
            char c;
            cin >> c;
            
            if (!st.empty() && st.top() == '(' && c == ')') {
                st.pop(); // Found a matching pair, remove '(' from stack
            } else {
                st.push(c); // No matching pair found, push the current bracket onto stack
            }
        }
        
        // The remaining elements in the stack correspond to unmatched brackets
        moves = st.size() / 2;
        
        cout << moves << endl;
    }
    
    return 0;
}
