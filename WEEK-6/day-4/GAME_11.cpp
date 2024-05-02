#include <bits/stdc++.h>

using namespace std;

int func(vector<int>& bat, vector<int>& bow, int n, int m) {
  sort(bat.begin(), bat.end(), greater<int>());
  sort(bow.begin(), bow.end(), greater<int>());

  if (n < 4 || m < 4) {
    return -1;
  }

  int total = 0;
  for (int i = 0; i < 4; ++i) {
    total += bat[i];
  }
  for (int i = 0; i < 4; ++i) {
    total += bow[i];
  }
  return total;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    vector<int> bat(a), bow(b);
    for (int i = 0; i < a; i++) {
      cin >> bat[i];
    }
    for (int i = 0; i < b; i++) {
      cin >> bow[i];
    }

    int result = func(bat, bow, a, b);
    if (result == -1) {
      cout << -1 << "\n";
    } else {
      int maximum = INT_MIN;
      for (int i = 3; i >= 1; i--) {
        int count = 0;
        for (int j = 4; j < 4 + i; j++) {
          if (j < a) {
            count += bat[j];
          }
        }
        if (i + 4 != 7) {
          for (int k = 4; k < 4 + ((i + 4) - 7); k++) {
            if (k < b) {
              count += bow[k];
            }
          }
        }
        maximum = max(maximum, result + count);
      }
      cout << maximum << "\n";
    }
  }
  return 0;
}
