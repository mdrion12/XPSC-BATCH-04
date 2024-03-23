#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sm=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++)
        {
         int value;
         cin>>value;
         sum+=value;
         if(value<sm)
         {
            sm=value;
         }
        }
        int result=sum-(sm*n);
        cout<<result<<"\n";

    }
    return 0;
}