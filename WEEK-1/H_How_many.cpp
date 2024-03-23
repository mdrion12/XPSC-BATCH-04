#include <iostream>
using namespace std;

int count_triples(int S, int T) {
    int count = 0;
    for (int a = 0; a <= 100; ++a) {
        for (int b = 0; b <= 100; ++b) {
            for (int c = 0; c <= 100; ++c) {
                if (a + b + c <= S && a * b * c <= T) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int S, T;
    cin >> S >> T;

    cout << count_triples(S, T) << endl;

    return 0;
}
