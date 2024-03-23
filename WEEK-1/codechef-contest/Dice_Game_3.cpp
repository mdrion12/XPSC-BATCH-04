#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long int score = 0;
        bool prev_roll_was_1 = false;

        for (int i = 0; i < N; ++i) {
            int X;
            cin >> X;

            if (X == 1 && prev_roll_was_1) {
                score += 2 * X;
            } else {
                score += X;
            }
            
            prev_roll_was_1 = (X == 1);
        }

        cout << score << endl;
    }

    return 0;
}
