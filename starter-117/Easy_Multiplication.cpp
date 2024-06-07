#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int L, R;
        cin >> L >> R;

        long long multiplication = 1;

        for (int i = L - 1; i < R; ++i) {
            multiplication *= A[i];
            if (multiplication <= 0) break;
        }

        if (multiplication > 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
