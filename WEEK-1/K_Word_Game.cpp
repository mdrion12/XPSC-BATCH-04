#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
      
        const int rows = 3;
        const int cols = n;
        string words[rows][cols];
unordered_map<string, int> freq;
     
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> words[i][j];
                  freq[words[i][j]]++;
            }
        }

       
       

        
        int points[rows] = {0};
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (freq[words[i][j]] == 1) {
                    points[i] += 3;
                } else if (freq[words[i][j]] == 2) {
                    points[i] += 1;
                }
            }
        }

       
        for (int i = 0; i < rows; ++i) {
            cout << points[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
