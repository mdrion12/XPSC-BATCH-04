#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int result=a-b;
    if(result>=18)
    {
        cout<<"RCB"<<"\n";
    }
    else
    {
        cout<<"CSK"<<"\n";
    }
    return 0;
}