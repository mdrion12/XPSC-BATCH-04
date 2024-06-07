#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    
    // Get the last two digits of the year
    int lastTwoDigits = X % 100;
    
    // Output the phone model name
    if (lastTwoDigits < 10) {
        cout << "K0" << lastTwoDigits << "\n"; // Ensures the two-digit format
    } else {
        cout << "K" << lastTwoDigits << "\n";
    }
    
    return 0;
}
