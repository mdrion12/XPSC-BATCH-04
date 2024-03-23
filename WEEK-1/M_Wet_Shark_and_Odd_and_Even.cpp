#include <bits\stdc++.h>
#include <limits.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    long long sum = 0; 
    long long smal = LLONG_MAX;

    for(int i = 0; i < t; i++) {
        long long value;
        cin >> value;
        sum+=value;
        
          
        if (value % 2 !=0 && value < smal)
            smal = value;
    }

     if(sum%2==0)
     {
        cout<<sum<<"\n";
     }

    else
        cout << sum - smal << "\n";

    return 0;
}
