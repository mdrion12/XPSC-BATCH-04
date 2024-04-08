#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
     int a;
     cin>>a;
    
     for(int i=1;i<=a;i++)
     {
         string s1;
        for(int j=1;j<=a;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"##";
                s1+="##";
            }
            else
            {
                cout<<"..";
                s1+="..";
            }
        }
        cout<<"\n"<<s1<<"\n";
        s1.clear();
     }
    }
    
    return 0;
}