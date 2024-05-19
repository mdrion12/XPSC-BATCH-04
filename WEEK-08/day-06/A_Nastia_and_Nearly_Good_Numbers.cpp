#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using  namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x,y,z;
        if(b==1)
        {
            cout<<"NO"<<nl;
            continue;
        }
        else if(b==2)
        {
            cout<<"YES"<<nl;
            if(a==1)
            {
                cout<<3<<" "<<1<<" "<<4<<nl;
            }
            else{
                b*=a;
                z=a*b;
                b--;
                x=a*b;
                y=a;
                cout<<x<<" "<<y<<" "<<z<<nl;
            }
        }
        else{
            cout<<"YES"<<nl;
            z=a*b;
            b--;
            x=a*b;
            y=a;
            cout<<x<<" "<<y<<" "<<z<<nl;
        }
 
    }
}
 