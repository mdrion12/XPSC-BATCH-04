#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int a;
        cin>>s>>a;
        int r=s.size()-1;
        int l=0;
        int count=0;
        while(l<r)
        {
         if(s[l]!=s[r])
         {
            int v=s[l];
            int v1=s[r];
            count+= abs(v-v1);
         }
         l++;
         r--;
        }
        if(count<=a)
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