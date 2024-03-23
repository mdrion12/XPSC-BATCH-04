#include <iostream>
#include <vector>

using namespace std;

int minOperations(int n, int s, vector<int>& arr) {
    int left = 0, right = n - 1;
    int currSum = 0, operations = 0;

    for (int i = 0; i < n; ++i) {
        currSum += arr[i];
    }

    while (currSum > s) {
        if (arr[left] == 1 && arr[right] == 1) {
            currSum -= 2;
            ++left;
            --right;
        } else if (arr[left] == 0 && arr[right] == 0) {
            ++left;
            --right;
        } else if (arr[left] == 1) {
            currSum -= 1;
            ++left;
        } else if (arr[right] == 1) {
            currSum -= 1;
            --right;
        }
        ++operations;
    }

    if (currSum == s) {
        return operations;
    } else {
        return -1;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int result = minOperations(n, s, arr);
        cout << result << endl;
    }

    return 0;
}
