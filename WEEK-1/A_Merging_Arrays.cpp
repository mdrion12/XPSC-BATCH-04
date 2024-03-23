#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> merged;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            merged.push_back(b[j]);
            j++;
        }
    }

    // Add remaining elements of a, if any
    while (i < n) {
        merged.push_back(a[i]);
        i++;
    }

    // Add remaining elements of b, if any
    while (j < m) {
        merged.push_back(b[j]);
        j++;
    }

    // Print the merged array
    for (int k = 0; k < merged.size(); k++)
        cout << merged[k] << " ";
    cout << endl;

    return 0;
}
