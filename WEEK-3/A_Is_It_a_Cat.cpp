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
     vector<char>q;
     for(int i=0;i<a;i++)
     {
        char c;
        cin>>c;
        char s=tolower(c);
    if(q.empty())
    {
        q.push_back(s);
    }
    else
    {
        if(q.back()!=s)
        {
        q.push_back(s);
        }

    }
     }
    
    vector<char> s={'m','e','o','w'};
     bool found=true;
     if(s.size()==q.size())
     {
        for(int i=0;i<q.size();i++)
        {
            if(q[i]!=s[i])
            {
                found=false;
                break;
            }
        }
     }
     else if(q.size()!=s.size())
     {
      found=false;
     }
     if(found)
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