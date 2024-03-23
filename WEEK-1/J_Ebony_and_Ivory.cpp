#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x,y;
    bool found=false;
   
       for(x=0;x<=c;x++)
    {

    for(int y=0;y<=c;y++)
      {
        if((a*x+b*y)==c)
        {
            found=true;
            break;
        }
      }
      if(found)
      break;

    }
    if(found)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }

    return 0;
}