#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        
        if (x> y) {
            cout << 2*x - 1 << endl;
        }
       
        else if (y > x) {
            cout << 2*y - 1 << endl;
        }
     
        else {
            cout << x + y << endl;
        }
    }


    return 0;
}