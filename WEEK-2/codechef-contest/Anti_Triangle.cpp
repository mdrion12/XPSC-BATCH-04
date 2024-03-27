#include <iostream>
#include <vector>

using namespace std;

void generateBranchLengths(int N, int L) {
    // Create a vector to store branch lengths
    vector<int> A(N);

    // Fill the first element with L + 1
    A[0] = L + 1;

    // Fill the remaining elements with consecutive integers starting from 1
    for (int i = 1; i < N; ++i) {
        A[i] = i + 1;
    }

    // Output the branch lengths
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T; // Input the number of test cases

    // Process each test case
    while (T--) {
        int N, L;
        cin >> N >> L; // Input the number of branches Chef saw and the length of the wooden branch Chef has
        // Generate and output the branch lengths
        generateBranchLengths(N, L);
    }

    return 0;
}
