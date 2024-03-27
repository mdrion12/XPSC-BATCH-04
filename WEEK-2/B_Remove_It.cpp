#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>v;
    for(int i=0;i<a;i++)
    {
        int value;
        cin>>value;
        if(value!=b)
        {
            v.push_back(value);
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    return 0;
}