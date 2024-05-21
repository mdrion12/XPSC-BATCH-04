#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
 
    list<char> li;
    int oddcount = 0;
    char oddChar = 0;
 
    // Count the number of characters with odd frequencies
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            oddcount++;
            oddChar = it.first;
        }
    }
 
    // Check if a palindrome can be formed
    if (oddcount > 1)
    {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }
 
    // Add characters with even frequencies
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        while (it->second >= 2)
        {
            li.push_front(it->first);
            li.push_back(it->first);
            it->second -= 2;
        }
    }
 
    // Add the odd character in the middle if there's one
    if (oddcount == 1)
    {
        li.insert(next(li.begin(), li.size() / 2), oddChar);
    }
 
    // Output the result
    for (auto it : li)
    {
        cout << it;
    }
    cout << "\n";
 
    return 0;
}
