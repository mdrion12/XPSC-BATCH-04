#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  cin>>a;
  int count_a=0;
  int count_b=0;
  vector<char>v(a);
for(int i=a;i>0;i--)
  {
   if( count_a<2 && count_b==0)
   {
    v.push_back('a');
    count_a++;
   }
   if(count_a==2 && count_b<2)
   {
    v.push_back('b');
  count_b=0;
   }
   if(count_a==2 && count_b==2 )
   {
    count_a=0;
     count_b=0;
   }
  }
 for(auto it:v)
 {
    cout<<it;
 }
    return 0;
}