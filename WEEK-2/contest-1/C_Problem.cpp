#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        int difference = abs(n - m);
        if (difference % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
