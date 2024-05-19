#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll primenxt(ll a)
{
    while(1)
    {
        bool f=false;
        for(int i=2;i*i<=a;i++)
        {
            if(a%i==0)
            {
            f=true;
            break;
            }
        }
        if(f)
        {
            a++;
        }
        else
        {
            break;
        }
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        ll x=d+1;
        x=primenxt(x);
        ll b=x+d;
        b=primenxt(b);
        cout<<x*b<<"\n";


    }
    return 0;
}