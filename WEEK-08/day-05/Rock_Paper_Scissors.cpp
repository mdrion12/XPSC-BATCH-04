#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int i=0;
        int count=0;
        while(i<n)
        {
            if(i+1<n)
            {
                if(a[i]!=a[i+1])
                {
                    count++;
                    i++;
                }
                else if(a[i]==a[i+1])
                {
                    count++;
                    i+=2;
                }
            }
            else if(i==n-1)
            {
                count++;
                i++;
            }
        }
        cout<<count<<"\n";
    }

    return 0;
}
