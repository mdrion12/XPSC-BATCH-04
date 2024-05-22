#include <iostream>
#include <cmath>

using namespace std;

int minOperations(int A, int B, int K) {
    if (A == B) // No operations needed if A is already equal to B
        return 0;

    int diff = B - A;
    int steps = 0;

    // Calculate the number of steps needed to reduce B to A
    if (K == 1) {
        steps = diff;
    } else {
        // Calculate the maximum power of K that can be applied to A to reach or exceed B
        int maxPower = log2((double)diff) / log2((double)K);

        // If K^maxPower is greater than or equal to diff, reduce steps by 1
        if (pow(K, maxPower) >= diff) {
            steps = maxPower;
        } else {
            // If K^maxPower is less than diff, need one more step to reach or exceed B
            steps = maxPower + 1;
        }
    }

    return steps;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, K;
        cin >> A >> B >> K;
        cout << minOperations(A, B, K) << endl;
    }

    return 0;
}
