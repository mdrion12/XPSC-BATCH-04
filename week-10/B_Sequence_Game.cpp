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
        vector<int>v(a),x;
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }
        x.push_back(v[0]);
        for(int i=1;i<a;i++)
        {
            if(v[i]>=v[i-1])
            {
                 x.push_back(v[i]);
            }
            else
            {
                 x.push_back(v[i]);
                   x.push_back(v[i]); 
            }
        }
        cout<<x.size()<<"\n";
        for(auto it:x)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}