#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(-1);
    nums.push_back(-3);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(7);
    int k=3;
    
    vector<int> v;
    deque<int> q;

    //find max of first window
    for(int i=0;i<k;++i){
      	if(q.empty()) q.push_back(nums[i]);
        else{
      	    while(!q.empty() && nums[i]>q.back()){
                q.pop_back();
            }
            q.push_back(nums[i]);
        }
    }

    v.push_back(q.front());
    int l=0;
    for(int i=k;i<nums.size();++i){
        if(q.empty()){
            q.push_back(nums[i]);
            continue;
        } 
        if(q.front()==nums[l]) q.pop_front();
      	while(!q.empty() && nums[i]>q.back()){
          	q.pop_back();
        }
        q.push_back(nums[i]);
                
        v.push_back(q.front());
        ++l;
    }
    for(auto it:v) cout<<it<<" ";
    
return 0;
}