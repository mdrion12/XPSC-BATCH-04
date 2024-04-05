#include <iostream>
#include <vector>

using namespace std;

pair<int, int> chefHappiness(int N, int l, int r, vector<int>& A) {
  int currentHappiness = 0;
  int runningMinHappiness = 0;

  for (int num : A) {
    if (l <= num && num <= r) {
      currentHappiness++;
      runningMinHappiness++;
    } else {
      currentHappiness--;
    }
  }

  return {currentHappiness, runningMinHappiness};
}

int main() {
  int T;
  cin >> T;  // Number of test cases

  for (int i = 0; i < T; i++) {
    int N, l, r;
    cin >> N >> l >> r;

    vector<int> A(N);
    for (int j = 0; j < N; j++) {
      cin >> A[j];
    }

    pair<int, int> happiness = chefHappiness(N, l, r, A);
    cout << happiness.first << " " << happiness.second << endl;
  }

  return 0;
}
