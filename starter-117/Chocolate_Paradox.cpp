#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool f = false;

    for (int i = 0; i * a <= c; i++) {
        if ((c - i * a) % b == 0) {
            f = true;
            break;
        }
    }

    if (f) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}
