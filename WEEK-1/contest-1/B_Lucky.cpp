#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int first=0;
        int second=0;
        char a[6];
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
            if(i<3)
            {
                first+=a[i]+'0';
            }
            else{
                second+=a[i]+'0';
            }

        }
        if(first==second)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}