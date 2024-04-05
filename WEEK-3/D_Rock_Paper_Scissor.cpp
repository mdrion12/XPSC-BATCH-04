#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int chef = 0, chefina = 0;
        vector<char> c(n), s(n);
        
        for (int i = 0; i < n; i++)
            cin >> c[i];
        
        for (int i = 0; i < n; i++)
            cin >> s[i];
        
        for (int i = 0; i < n; i++) {
            if ((c[i] == 'R' && s[i] == 'S') ||
                (c[i] == 'S' && s[i] == 'P') ||
                (c[i] == 'P' && s[i] == 'R'))
                chef++;
            else if ((s[i] == 'R' && c[i] == 'S') ||
                     (s[i] == 'S' && c[i] == 'P') ||
                     (s[i] == 'P' && c[i] == 'R'))
                chefina++;
        }
        
        if (chefina > chef)
            cout << chefina - chef << "\n";
        else
            cout << 0 << "\n";
    }
    
    return 0;
}
