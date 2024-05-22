#include <bits/stdc++.h>
using namespace std;

int minOperations(long long A, long long B, long long K) {
    if (A == B) return 0;

    queue<pair<long long, int>> q;
    unordered_set<long long> visited;

    q.push(make_pair(A, 0));
    visited.insert(A);

    while (!q.empty()) {
        pair<long long, int> current = q.front();
        q.pop();

        long long currentVal = current.first;
        int steps = current.second;

        // Option 1: Increment current value by 1
        long long add1 = currentVal + 1;
        if (add1 == B) return steps + 1;
        if (add1 < B && visited.find(add1) == visited.end()) {
            q.push(make_pair(add1, steps + 1));
            visited.insert(add1);
        }

        // Option 2: Multiply current value by K
        long long multiplyK = currentVal * K;
        if (multiplyK == B) return steps + 1;
        if (multiplyK < B && visited.find(multiplyK) == visited.end()) {
            q.push(make_pair(multiplyK, steps + 1));
            visited.insert(multiplyK);
        }
    }

    return -1;  // Should never reach here given the constraints
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long A, B, K;
        cin >> A >> B >> K;
        cout << minOperations(A, B, K) << endl;
    }
    return 0;
}
