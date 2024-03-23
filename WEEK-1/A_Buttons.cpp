#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int sum = 0;
    if (a == 0 && a < b) {
        sum = max(b + (b - 1), b - a);
    } else if (a > b && b == 0) {
        sum = max(a + (a - 1), a - b);
    } 
    else if(a==b)
    {
        sum=a+b;
    }
    else {
        sum = max(max(a + (a - 1), b + (b - 1)), abs(a - b));
    }
    cout << sum << "\n";
    return 0;
}
