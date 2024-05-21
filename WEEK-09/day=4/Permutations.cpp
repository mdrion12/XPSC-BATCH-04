#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(1<t && t<4  )
    {
        cout<<"NO SOLUTION"<<"\n";
    }
    else
    {
        for(int i=1;i<=t;i++)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }
        }
        for(int i=1;i<=t;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
        }

    }
    return 0;
}