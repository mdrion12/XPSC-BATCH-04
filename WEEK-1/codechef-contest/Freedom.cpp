#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int freedom(const vector<int>& A) {
    int N = A.size();
    unordered_map<int, int> diffFreq;

    // Preprocess array to count frequency of differences between elements
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int diff = A[j] - A[i];
            diffFreq[diff]++;
        }
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int a = A[i] - A[j];
            int b = A[i] + A[j];
            int c = A[i] * A[j];

            if (diffFreq.count(b - a) && diffFreq.count(c - b)) {
                count += diffFreq[b - a] * diffFreq[c - b];
            }
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int result = freedom(A);
        cout << result << endl;
    }

    return 0;
}
