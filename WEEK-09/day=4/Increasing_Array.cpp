#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    long long pre=0;
    long long sum=0;
    while(t--)
    {
        int v;
        cin>>v;
         if(pre>v)
         {
            sum+=(pre-v);
         }       
       else{
         pre=v;
       }
    }
    cout<<sum<<"\n";
    return 0;
}