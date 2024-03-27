#include <iostream>

int main() {
  int t;
  std::cin >> t; // Read the number of test cases

  while (t--) {
    int a, b;
    std::cin >> a >> b; // Read Alice's and Bob's initial scores

    int shots_needed = 0;
    if (a - b >= 10) {
      // Alice already has a dominant victory (at least 10 points ahead)
      std::cout << 0 << "\n";
    } else {
      // Calculate minimum shots needed for dominant victory
      int diff = 10 - (a - b); // Points needed to reach a 10-point lead
      int remaining_shots = diff / 2 + (diff % 2 ? 1 : 0); // Minimum shots
      shots_needed += remaining_shots;
      std::cout << shots_needed << "\n";
    }
  }

  return 0;
}
