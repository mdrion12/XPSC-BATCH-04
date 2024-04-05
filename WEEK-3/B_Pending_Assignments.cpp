#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int x,y,z;
    cin>>x>>y>>z;
    int result=x*y;
    if(result<=(z*(24*60)))
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    }
    
    return 0;
}