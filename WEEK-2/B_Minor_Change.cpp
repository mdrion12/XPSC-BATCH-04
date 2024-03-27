#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s;
    cin.ignore();
    cin>>s2;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s2[i])
        {
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}