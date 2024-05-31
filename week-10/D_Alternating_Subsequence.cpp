#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        vector<long long> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

       
        int l = 0, r = 0;
        long long sum = 0;
        long long maximum = LLONG_MIN; 

        while (r < a)
        {
            
            if (v[l] < 0 && v[r] < 0)
            {
                maximum = max(maximum, v[r]);
            }
          
            else if (v[l] > 0 && v[r] > 0)
            {
                maximum = max(maximum, v[r]);
            }
            else
            {
                
                sum += maximum;
               
                maximum = v[r];
                
                l = r;
            }
            
            r++;
        }

      
        sum += maximum;

        cout << sum << "\n";
    }
    return 0;
}
