#include<bits/stdc++.h>
using namespace std;
int main()
{
      int T;
    cin >> T;
    vector<int> results(T);
    
    for (int t = 0; t < T; ++t) {
        string S;
        cin >> S;
          bool directions[4];
        for (int i = 0; i < 4; ++i) {
            directions[i] = S[i] == '1';
        }
            bool left = directions[0];
        bool right = directions[1];
        bool up = directions[2];
        bool down = directions[3];
        
        int count = 0;
        
        if (left && right && up && down) {
         
            count = 441;
        } else if (left && right && up) {
           
            count = 231;
        } else if (left && right && down) {
          
            count = 231;
        } else if (up && down && left) {
          
            count = 231;
        } else if (up && down && right) {
      
            count = 231;
        } else if (left && right) {
          
            count = 21;
        } else if (up && down) {
        
            count = 21;
        } else if (left && up) {
          
            count = 121;
        } else if (left && down) {
         
            count = 121;
        } else if (right && up) {
           
            count = 121;
        } else if (right && down) {
           
            count = 121;
        } else if (left) {
          
            count = 11;
        } else if (right) {
           
            count = 11;
        } else if (up) {
           
            count = 11;
        } else if (down) {
            
            count = 11;
        }
        
        results[t] = count;
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}