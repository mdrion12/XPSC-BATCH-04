#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int s=n/k;
        int c=0;
        while(c<k)
        {
            c++;
            cout<<s<<" ";
            s+=n/k;
        }
        cout<<"\n";
    }
    return 0;
}