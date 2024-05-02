#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
     int r=100-a;
     if(r%10==0)
     {
        cout<<r<<"\n";
     }
     else
     {
       int result=(a/10)+1;
       result=result*10;
       cout<<100-result<<"\n";
     }
    }
    return 0;
}