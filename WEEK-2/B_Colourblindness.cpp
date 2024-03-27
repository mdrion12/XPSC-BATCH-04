#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
     int N;
     cin>>N;
     string a,b;
     cin>>a;
     cin.ignore();
     cin>>b;
     for(int i=0;i<N;i++)
     {
        if(a[i]=='G')
        {
            a[i]='B';
        }
        if(b[i]=='G')
        {
            b[i]='B';
        }
     }
     if(a==b)
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