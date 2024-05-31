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
        int minimum=INT_MAX;
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
            if(v[i]>=b)
            {
                minimum=min(minimum,v[i]%b);
            }
        }
        if(minimum==INT_MAX)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<minimum<<"\n";
        }

    }
    return 0;
}