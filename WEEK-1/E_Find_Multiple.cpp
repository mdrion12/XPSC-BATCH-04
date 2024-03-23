#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int t=1;
    bool found=false;
    int value=0;
    while(t)
    {
        if(a<=c && b>=c)
        {
            found=true;
            value=c;
            break;
        }
        if(c>b)
        {
         break;
        }
        else {
            if(c<a)
            {
                c=c*t++;
            }
        }
    }
    if(found)
    {
        cout<<value<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    return 0;
}