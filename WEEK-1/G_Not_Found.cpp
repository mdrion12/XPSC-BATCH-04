#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main() {
    string s; cin>>s;
    ll cnt[26]={0};

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]) 
        {
            ll v = s[i] - 'a';
            cnt[v]++;
        }
    }

    char missing = NULL;
    for(int i=0; i<26; i++)
    {
        if(cnt[i] ==0)
        {
            missing ='a'+i;
            break;
        }
    }

    if(missing==NULL) cout<<"None"<<'\n';
    else cout<< missing<<'\n';
    return 0;
}
