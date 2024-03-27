#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>&v)
{
    int i=0;
    int j=v.size()-1;
    bool f=true;
    while (i<j)
    {
       if(v[i]!=v[j])
       {
        f=false;
      break;
       }
       i++;
       j--;
    }
    return f;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int l=0,r=n-1;
        int a,b;
        bool answer=true;
        while (l<r)
        {
        if(v[l]!=v[r])
        {
            a=v[l];
            b=v[r];
            answer=false;
            break;
        }
        l++;
        r--;
       
        }
        if(answer)
        {
            cout<<"YES"<<"\n";
            
        }
        else
        {
            vector<int>x,y;
            for(int i=0;i<n;i++)
            {
                if(v[i]!=a)
                {
                    x.push_back(v[i]);
                }
            }
             for(int i=0;i<n;i++)
            {
                if(v[i]!=b)
                {
                    y.push_back(v[i]);
                }
            }
            bool ac=solve(x);
            bool bc=solve(y);
            if(ac==true || bc==true)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
       
       
        
    }
    return 0;
}