#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   bool v[n+1];
    memset(v,false,sizeof(v));
    for(int i=1;i<=n;i++)
    {
        int value;
        cin>>value;
        v[value]=true;
    }
     for(int i=1;i<=n;i++)
     {
        if(v[i]==false)
        {
            cout<<i<<"\n";
            break;
        }
     }
    return 0;
}