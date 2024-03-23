#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    
    string s[4];

   
    for (int i = 3; i >= 0; --i) {
        int digit = n % 10; 
        n = n / 10;        
        s[i] = to_string(digit); 
    }

    
    for (int i = 0; i < 4; ++i) {
        cout << s[i];
    }

    cout << "\n";
    return 0;
}
