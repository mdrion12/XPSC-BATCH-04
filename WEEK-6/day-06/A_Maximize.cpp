#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

       
        int y = x - 1;

        cout << y << endl;
    }

    return 0;
}
