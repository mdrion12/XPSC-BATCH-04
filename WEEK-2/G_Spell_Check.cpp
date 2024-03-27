#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
   string s1="Timur";
    sort(s1.begin(),s1.end());
  while(t--)
  {
    int n;
    cin>>n;
    cin.ignore();
    string s2;
    cin>>s2;
     
   
    sort(s2.begin(),s2.end());
    if(s1==s2 && s2.size()==5)
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