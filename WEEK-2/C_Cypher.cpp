#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n),res(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
       for(int i=0;i<n;i++)
       {
        int a;
        cin>>a;
        int d=0,u=0;
        while(a--)
        {
            char c;
            cin>>c;
            if(c=='D')
            {
                d++;
            }
            else
            {
                u++;
            }

        }
         int sum=0;
        if(d>u)
        {
            d-=u;
             v[i]+=d;
         if(v[i]>=10)
         {
            sum=v[i]%10;
         }
         else
         {
            sum=v[i];
         }

        }
       
        else if(u>d)
        {
            u-=d;
            v[i]-=u;
            if(v[i]<0)
            {
                sum=v[i]+10;
            }
            else if(v[i]>=10)
            {
                sum=v[i]%10;
            }
            else
            {
                sum=v[i];
            }
        }
        else if(d==u)
        {
           sum=v[i];
        }
       

      res[i]=sum;
       }
       for(auto it:res)
       {
        cout<<it<<" ";
       }
cout<<"\n";
    }
    return 0;
}