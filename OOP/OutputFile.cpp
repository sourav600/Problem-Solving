#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
   string s;
   ifstream read;
   ofstream write;

   read.open("input.txt");
   write.open("output.txt");

   if(read){
       while(getline(read,s)) write<<s<<nl;
   }
   else cout<<"Not Read this File\n";

   read.close();
   write.close();
return 0;
}