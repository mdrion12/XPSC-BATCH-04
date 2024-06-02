#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int count=0;
        int sum=0;
        vector<int>v(a);
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(sum>=b)
            {
                count++;
                sum=0;
            }
            
        }
       cout<<count<<"\n";
        
    //     while(r<a)
    //     {   
    //     if(v[r]>=b)
    //     {
    //         count++;
    //     }
    //    else
    //    {
    //     while(sum<b && r<a)
    //     {
    //       sum+=v[r];
    //       r++;
    //     }
    //     if(sum>=b)
    //     {
    //         count++;
    //     }
    //    }
    //    r++;
    //     }
    //    
     }
    return 0;
}