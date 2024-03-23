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
     int freq[a+1]={0};
     for(int i=0;i<a;i++)
     {
      int value;
      cin>>value;
      freq[value]++;
     }
     bool found=false;
     for(int i=a;i>=0;i--)
     {
        if(freq[i]>=3)
        {
            cout<<i<<"\n";
            found=true;
            break;
        }
       
     }
     if(!found)
     {
        cout<<-1<<"\n";
     }

      
    }
    return 0;
}