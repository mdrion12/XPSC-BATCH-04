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
        string s;
        cin>>s;
        if(a==1)
        {
            cout<<0<<"\n";
            continue;
        }
 
    
            int c=0;
    for(int i=0;i<a-1;i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
            }
        }
       cout<<c<<"\n";
    
    }
    return 0;
}