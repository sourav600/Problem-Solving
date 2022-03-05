#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define MAX 1001
int arr[MAX];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
vector<int> prime;
prime.push_back(1);
prime.push_back(2);
for(int i=3; i*i<=MAX; i+=2){
    for(int j=i*i; j<=MAX; j=j+i) arr[j] = 1;
}
for(int i=3;i<=MAX;i+=2){
    if(arr[i]==0) prime.push_back(i);
}

vector<int> list;   
int n,c;
while(cin>>n>>c){
    cout<<n<<" "<<c<<": ";
    for(int i=0; prime[i]<=n && i<prime.size(); i++) list.push_back(prime[i]);
    int copy = c;
    int size = list.size();
    size%2==0?copy*=2: copy = (copy*2)-1;
    if(copy>=size){
        cout<<list[0];
        for(int i=1; i<size; i++) cout<<" "<<list[i];
        cout<<"\n\n";
    }
    else if(size%2){
        int mid = size/2;   //index
        c = (c*2)-1;
        mid = mid - ((c-1)/2);
        cout<<list[mid];
        while(--c){
            cout<<" "<<list[++mid];
        }
        cout<<"\n\n";
    }
    else{
        int mid = (size/2)-1; //index
        mid -= (c-1); 
        c *= 2;
        cout<<list[mid];
        while(--c){
            cout<<" "<<list[++mid];
        }
        cout<<"\n\n";
    }
    list.clear();
}

return 0;
}