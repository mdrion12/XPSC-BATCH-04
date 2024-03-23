#include <iostream>
#include <cmath>
using namespace std;

int min_tents(int a, int b, int c) {
    // Calculate the total number of participants
    int total = a + b + c;
    
    // Calculate the total number of tents needed for introverts
    int introvert_tents = a;
    
    // Calculate the total number of tents needed for extroverts
    int extrovert_tents = ceil(b / 2.0);
    
    // Calculate the total number of tents needed for universals
    int universals_tents = ceil((a + 2 * b + c) / 3.0);
    
    // Check if it's possible to accommodate all participants
    if (introvert_tents + extrovert_tents >= universals_tents) {
        return introvert_tents + extrovert_tents;
    } else {
        return -1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        // Output
        cout << min_tents(a, b, c) << endl;
    }
    return 0;
}

