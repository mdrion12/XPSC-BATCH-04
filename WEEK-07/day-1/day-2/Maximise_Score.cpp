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
int minterm=INT_MAX;
int i;
vector<int>res;
for( i=0;i<a;i++)
{
   int left=-1;
   int right=-1;
  if(i-1>=0) left=abs(v[i]-v[i-1]);
  if(i+1<a) right=abs(v[i]-v[i+1]);
    res.push_back(max(left,right));
}

for(int i=0;i<a;i++)
{
    minterm=min(minterm,res[i]);
}
cout<<minterm<<"\n";
    }
    return 0;
}