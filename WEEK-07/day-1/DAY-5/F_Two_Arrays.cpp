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
        vector<int>v(a),x(a);
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<a;i++)
        {
            cin>>x[i];
        }
        sort(v.begin(),v.end());
         sort(x.begin(),x.end());
        bool f=true;
        for(int i=a-1;i>=0;i--)
        {
            if(v[i]>x[i]  || x[i]-v[i]>1)
            {
             f=false;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }


    }
    return 0;
}