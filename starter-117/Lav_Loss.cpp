#include<bits/stdc++.h>
using namespace std;
int main() {
    double X, Y, Z;
    cin >> X >> Y >> Z;
    
   
    double CP = X / (1 - Y / 100);
    

    double SP = CP * (1 + Z / 100);
    

    cout << fixed << setprecision(2) << SP << endl;
    
    return 0;
}
