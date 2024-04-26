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
        vector<int>v(a+1);
        for(int i=1;i<=a;i++)
        {
            cin>>v[i];
            v[i]+=i;
        }
        sort(v.begin()+1,v.end());
        int sum=0,count=0;
         for(int i=1;i<=a;i++)
         {
            if(v[i]+sum<=b)
            {
                count++;
                sum+=v[i];
            }
            else
            {
                break;
            }

         }
        cout<<count<<"\n";
    }
    return 0;
}