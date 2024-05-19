#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        // Correct initialization of 2D vector
        vector<vector<int>> v(a + 2, vector<int>(b + 2));
        
        int value = 1;
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                v[i][j] = value;
                value++;
            }
        }

        // Combined loop structure for output
        for (int i = 1; i <= a; i++) {
            if (i % 2 == 0) {
                for (int j = 1; j <= b; j++) {
                    cout << v[i][j] << " ";
                }
            }
            cout<<"\n";
            
        }
        cout<<"\n";
        for (int i = 1; i <= a; i++) {
            if (i % 2 != 0) {
                for (int j = 1; j <= b; j++) {
                    cout << v[i][j] << " ";
                }
            }
        
        }
       cout<<"\n";// To ensure each test case output is separated by a newline
    }
    return 0;
}
