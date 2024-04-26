#include<bits/stdc++.h>
using namespace std;
string decodeBinary( int n)
{
 string s="";
 for(int i=64;i>=0;i--)
 {
    int k=n>>i;
    if(k&1)
    {
        s+="1";
    }
    else{
        s+="0";
    }
 }
 return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        vector<int>v(a);
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }
     vector<int>m(64);
     int g=0;
     
        for(int i=0;i<a;i++)
        {
            string x=decodeBinary(v[i]);
            for(int j=0;j<64;j++)
            {
               if (x[j] != '0')
                m[j]++;
            }
        }
          for (int i = 0; i < 64; i++)
        g = __gcd(g, m[i]);
    for (int i = 1; i <= a; i++)
    {
        if (g % i == 0)
            cout << i << ' ';
    }
    cout << endl;
    }
    return 0;
}