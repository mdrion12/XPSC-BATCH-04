#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n];
 
        bool f=1;
        for(i=0;i<n;i++) cin>>a[i];
 
        for(i=0;i<(1<<8);i++)
        {
            int x =0;
            for(j=0;j<n;j++)
            {
                int y = x^(a[j]^i);
                x=y;
            }
            if(x==0)
            {
                cout<<i<<endl;
                f =0;
                break;
            }
        }
 
        if(f) cout<<-1<<endl;
    }
    return 0;
}