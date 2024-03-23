#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,k;
   cin>>a>>k;
   vector<int>v(a);
   vector<int>ans;
   for(int i=0;i<a;i++)
   {
    cin>>v[i];
   }
   int l=0,r=0;
queue<int>q;
   while(r<a)
   {
    while(!q.empty() && v[r]>q.front())
    {
        q.pop();
    }
    q.push(v[r]);
    if(r-l+1==k)
    {
       ans.push_back(q.front());
       if(v[l]==q.front())
       {
        q.pop();
       }
       l++;
       r++;;

    }
    else
    {
        r++;
    }
    
   }
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
    return 0;
}

// @dipanshukumrawal4880
// 1 year ago (edited)
// For those who are getting wrong answers in some test cases: use deque instead of queue | C++
// class Solution {
//   public:
//     vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
//         // your code here
//         deque<int>q;
//         int i=0,j=0;
//         vector<int>res;
//         while(j<n){
//             while(!q.empty() && q.back()<arr[j]) q.pop_back();
//             q.push_back(arr[j]);
//             if(j-i+1<k) j++;
//             else if(j-i+1==k){
//                 res.push_back(q.front());
//                 if(q.front()==arr[i]) q.pop_front();
//                 i++;
//                 j++;
//             }
//         }
//         return res;
//     }
// };