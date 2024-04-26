#include <iostream>
#include <limits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int min_xor = numeric_limits<int>::max(); // Initialize with maximum possible value
        int index = 0;
        for (int i = 0; i < 30; ++i) { // Iterate up to 2^30
            int result = (a ^ i) - (b ^ i);
            if (result < min_xor) {
                min_xor = result;
                index = i;
            }
        }
        cout << index << "\n";
    }
    return 0;
}
