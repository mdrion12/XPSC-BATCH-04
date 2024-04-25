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
        vector<int>v(a);
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }
        int l=0,r=0;
        int value=0;
        int count=0;
        while (r<a)
        {
         value|=v[r];
         if(r-l+1==b)
         {
          if(value%2!=0)
          {
            count++;
          }
          value^=v[l];
          l++;
         }
         r++;
        }
        cout<<count<<"\n";
        
    }
    return 0;
}