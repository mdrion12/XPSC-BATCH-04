#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    
    int sum=0;
    if(a>b  )
    cout<<0<<"\n";
    else 
    {
         sum=abs(a-b)+1;
         cout<<sum<<"\n";
    }
    
    return 0;
}