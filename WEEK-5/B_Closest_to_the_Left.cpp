#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>v(a);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    while(b--)
    {
        int key;
        cin>>key;
        int l=0,r=a-1;
        int mid,ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(key>=v[mid])
            {
             ans=mid;
             l=mid+1;
            }
            else
            {
                r=mid-1;
            }

        }
        cout<<ans+1<<"\n";
    }
    return 0;
}