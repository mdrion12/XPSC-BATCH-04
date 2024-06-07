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
        set<int>s;
        for(int i=0;i<a;i++ )
        {
            int v;
            cin>>v;
            s.insert(v);
        }
        for(auto it:s)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}