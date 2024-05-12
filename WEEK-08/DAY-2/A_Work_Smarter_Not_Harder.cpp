#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int L, V1, V2;
        cin >> L >> V1 >> V2;
        
        // Calculate time taken by tortoise and hare
        double t = ceil((double)L / V1);
        double h = ceil((double)L / V2);
        
        // Compare rounded times
        if (t == h) {
            cout << "-1\n";
        } else {
            cout << int(t - h) - 1 << "\n";
        }
    }

    return 0;
}
