#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       ll n, k;
    cin >> n >> k;
    int i = 1;
    while (k > 0) {
        cout << i << " ";
        i++;
        k--;
    }
    int j=i;
    j++;
    while(j <= n) {
        cout << j << " ";
        j += 2;
    }
    while(i <= n) {
        cout << i << " ";
        i += 2;
    }
    cout << "\n";
    }
    return 0;
}
