#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string max_streak(int n, vector<int>& om, vector<int>& addy) {
    int om_streak = 0, addy_streak = 0;
    int max_om_streak = 0, max_addy_streak = 0;

    for (int i = 0; i < n; ++i) {
        if (om[i] > 0) {
            om_streak++;
            max_om_streak = max(max_om_streak, om_streak);
        } else {
            om_streak = 0;
        }

        if (addy[i] > 0) {
            addy_streak++;
            max_addy_streak = max(max_addy_streak, addy_streak);
        } else {
            addy_streak = 0;
        }
    }

    if (max_om_streak > max_addy_streak) {
        return "Om";
    } else if (max_om_streak < max_addy_streak) {
        return "Addy";
    } else {
        return "Draw";
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> om_problems(N), addy_problems(N);
        for (int i = 0; i < N; ++i) {
            cin >> om_problems[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> addy_problems[i];
        }
        cout << max_streak(N, om_problems, addy_problems) << endl;
    }
    return 0;
}
