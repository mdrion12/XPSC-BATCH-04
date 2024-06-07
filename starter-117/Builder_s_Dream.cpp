#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int height = 0;
    int max_height = v[n - 1];

    for(int i = 0; i < n - 1; i++) {
        height += (max_height - v[i]);
    }

    if(k > height) {
        cout << max_height + k / n << endl;
    } else {
        cout << v[n - 1] << endl;
    }
  
    return 0;
}
