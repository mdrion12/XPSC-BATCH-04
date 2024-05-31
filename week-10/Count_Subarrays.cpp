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
        vector<int>v(a);
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }
        map<int,int>mp;
        for(int i=0;i<a;i++)
        {
            int sum=0;
           for(int j=i;j<a;j++)
           {
            sum+=v[j];
            if(sum<=a)
            {
             mp[sum]++;
            }
            else
            {
                break;
            }
           }
            
        }
        for(auto it:mp)
        {
            cout<<it.second<<" ";
        }
        cout<<"\n";
    }
    return 0;
}