#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        bool f = false;
        
        for (int i = 0; i < a - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                s.erase(i, 1); // Remove the character at index i
                f = true;
                break;
            }
        }
        
        if (!f)
        {
            s.erase(a - 1, 1); // Remove the last character
        }
        
        cout << s << "\n";
    }
    return 0;
}
