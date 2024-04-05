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
  int i=2;
  int count=0;
  while (i<=a)
  {
  
   count++;
   i+=7;
  }
  cout<<count<<"\n";
  
}

    return 0;
}