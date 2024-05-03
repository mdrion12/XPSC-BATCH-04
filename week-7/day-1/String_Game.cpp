#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(false);
 cin.tie(NULL);
 int t;
 cin>>t;
 while(t--)
 {
    int a;
    cin>>a;
    int count1=0,count0=0;
    string v;
    cin>>v;
    for(int i=0;i<a;i++)
    {

        if(v[i]=='0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    int mincnt=min(count1,count0);
    if(mincnt%2==0)
    {
        cout<<"Ramos"<<"\n";
    }
    else
    {
        cout<<"Zlatan"<<"\n";
    }
 }
    return 0;
}