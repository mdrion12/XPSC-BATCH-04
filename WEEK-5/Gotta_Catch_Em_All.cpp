#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
    
    int sum=0;
         for(int i=0;i<n;i++)
        {
          if(x<y)
          {
             if(v[i]*x<=y)
             {
             sum+=v[i]*x;
             }
             else
             {
                sum+=y;
             }
          }
          else if(x<=y)
          {
            sum+=y;
          }
        }
        cout<<sum<<"\n";
        
    }
    return 0;
}