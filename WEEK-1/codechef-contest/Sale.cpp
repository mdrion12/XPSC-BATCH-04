#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxTotalSales(vector<long long>& sales) {
    long long totalSales = 0;
    long long maxSales = 0;

    // Calculate total sales and maximum single day sales
    for (int i = 0; i < sales.size(); ++i) {
        totalSales += sales[i];
        maxSales = max(maxSales, sales[i]);
    }

    // Compare total sales with doubling the maximum single day sales
    return max(totalSales, 2 * maxSales);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> sales(N);
        for (int i = 0; i < N; ++i) {
            cin >> sales[i];
        }

        cout << maxTotalSales(sales) << endl;
    }

    return 0;
}
