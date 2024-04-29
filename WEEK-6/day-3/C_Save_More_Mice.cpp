#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxMiceReached(int n, int k, vector<int>& micePositions) {
    sort(micePositions.begin(), micePositions.end()); // Sort mice positions in ascending order
    int left = 0, right = n, miceReached = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        int catPosition = mid;
        int miceSaved = 0;

        for (int mousePosition : micePositions) {
            if (mousePosition <= catPosition) {
                miceSaved++;
            }
        }

        if (miceSaved > 0) {
            left = mid + 1;
            miceReached = max(miceReached, miceSaved);
        } else {
            right = mid - 1;
        }
    }

    return miceReached;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> micePositions(k);
        
        for (int i = 0; i < k; i++) {
            cin >> micePositions[i];
        }

        cout << maxMiceReached(n, k, micePositions) << endl;
    }

    return 0;
}
