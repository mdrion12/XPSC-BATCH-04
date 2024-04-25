#include<bits/stdc++.h>
using namespace std;
int reverse(int num) {
    return (num % 10) * 10 + (num / 10);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int a1=reverse(a);
        int b1=reverse(b);
        if(a>b)
        {
            cout<<"Yes"<<"\n";
        }
        else if(a>b1)
        {
            cout<<"Yes"<<"\n";
        }
         else if(a1>b)
        {
            cout<<"Yes"<<"\n";
        }
         else if(a1>b1)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }
    }
    return 0;
}