#include<bits/stdc++.h>
using namespace std;

int minimumDraws(int X, int Y) {
  
  if (X < 0 || Y < 0) {
    return -1;
  }

  int totalWinsA = X / 3;
  int remainingPointsA = X % 3;

  
  int totalWinsB = Y / 3;
  int remainingPointsB = Y % 3;

  
  if (remainingPointsA != remainingPointsB) {
    return -1; 
  }

  
  return remainingPointsA;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int X, Y;
    cin >> X >> Y;

    int minDraws = minimumDraws(X, Y);
    if (minDraws == -1) {
      cout << "No valid scenario" << endl;
    } else {
      cout << minDraws << endl;
    }
  }

  return 0;
}
