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
    int sum1=0,sum2=0,sum3=0,sum4=0;
    vector<int>A(a),DA(a),P(a),DP(a);
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
        sum1+=A[i];
    }
    for(int i=0;i<a;i++)
    {
        cin>>DA[i];
        sum2+=DA[i];
    }
    for(int i=0;i<a;i++)
    {
        cin>>P[i];
        sum3+=P[i];
    }
    for(int i=0;i<a;i++)
    {
        cin>>DP[i];
        sum4+=DP[i];
    }
    if(sum1<sum3 && sum2<sum4)
    {
        cout<<"P"<<"\n";
    }
    else if(sum1>sum3 && sum2>sum4)
    {
        cout<<"A"<<"\n";
    }
    else
    {
        cout<<"DRAW"<<"\n";
    }
    
    }
    
    return 0;
}