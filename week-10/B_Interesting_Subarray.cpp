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
    vector<int>v(a);
      for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    bool b=false;
   int x=0;
    for(int i=1;i<a;i++)
    {
        if(v[i]-v[i-1]>=2)
        {
            b=true;
            x=i;
            break;

        }
    }
    if(b)
    {
        cout<<"YES"<<"\n"<<x-1<<" "<<x<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

}
    return 0;
}