#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

bool solve(vector<int> v,vector<bool>& visited,int currsum,int idx,int subsetsum,int k)
{
        if(k==0)return true;
        if(currsum>subsetsum)return false;
        if(currsum==subsetsum){
            return solve(v,visited,0,0,subsetsum,k-1);
        }
        for(int i=idx;i<v.size();i++){
            if(visited[i])continue;
            visited[i] = true;
            if(solve(v,visited,currsum+v[i],i+1,subsetsum,k))return true;
            visited[i] = false;
            if(currsum==0)break;
        }
        return false;
}
int fun(vector<int>&v,int sum)
{
    int n=v.size();
    if(sum%3!=0)
    {
        return 0;
    }
    int subsetsum = sum/3;
    vector<bool> vis(n,false);
    sort(v.rbegin(), v.rend());
    if(v[0]>subsetsum)
    {
        return 0;
    }
    if(solve(v,vis,0,0,subsetsum,3))
    {
        return 1;
    }
    return 0;
}
void Chaos()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        vector<int>v;
        int sum=0;
        for(int j=0;j<=i;j++)
        {
            v.push_back(arr[j]);
            sum+=arr[j];
        }
        cout<<fun(v,sum)<<endl;
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int __=1;
     cin>>__;
    for(int i=1; __--;i++)
    {
         cout<<"Case "<<i<<":"<<endl;

        Chaos();
    }

    return 0;
}
