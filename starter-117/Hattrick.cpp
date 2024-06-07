#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<char>v(6);
        for(int i=0;i<6;i++)
        {
         cin>>v[i];
        }
        bool f=false;
        for(int i=0;i<=3;i++)
        {
         if(v[i]=='W' && v[i+1]=='W' && v[i+2]=='W')
         {
            f=true;
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