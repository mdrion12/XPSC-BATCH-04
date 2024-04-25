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
      int count=0;
      vector<int>v(a);
      for(int i=0;i<a;i++)
      {
        cin>>v[i];
        if(v[i]==2)
        {
            count++;
        }
      }
      if(count==8)
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