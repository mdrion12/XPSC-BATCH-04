#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int x=0;x<=a;x++)
    {
        for(int y=0;y<=a;y++)
        {
 
        int z=b-x-y;
          if(z>=0 && z<=a)
          {
            count++;
          }
          
        }
    }
    cout<<count<<"\n";
    return 0;
}