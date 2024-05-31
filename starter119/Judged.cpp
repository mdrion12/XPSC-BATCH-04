#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int count=0;
    for(int i=0;i<5;i++)
    {
        int v;
        cin>>v;
        if(v==1)
        {
            count++;
        }
    }
    if(count>=4)
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