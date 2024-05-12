#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isTPrime(long long v) {
    int count = 0;
    long long root = sqrt(v);
    for (long long i = 1; i <= root; i++) {
        if (v % i == 0) {
            count++;
            if (v / i != i) // Check if divisor is not the square root itself
                count++;
        }
        if (count > 3) // If count exceeds 3, it's not T-prime
            return false;
    }
    return count == 3; // Return true if exactly 3 divisors found
}

bool isPrime(long long n) {
    if (n == 1) {
        return false;
    }

    for (long long i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    int n;
    cin >> n;
   
    while (n--) {
        long long v;
        cin >> v;
       if(isPrime(v))
       {
        cout<<"NO"<<"\n";
       }
       else
       {
        if(v==4)
        {
            cout<<"YES"<<"\n";
        }
        else if( v%2==0)
        {
             cout<<"NO"<<"\n";
        }
        else
        {
            if(isTPrime(v))
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
       }
    }

    return 0;
}
