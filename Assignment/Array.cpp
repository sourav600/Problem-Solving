#include<bits/stdc++.h>
using namespace std;

void display(vector<int> v){
    for(int i=0;i<v.size();++i) cout<<v[i]<<"  ";
    cout<<endl;
}

int main(){
system("clear");
vector<int> arr;
int x;
while(1){
    display(arr);
    cout<<"***Menu***\n1. Insert    2. Delete   3. Exit\n";
    cout<<"Press integer according to menu: ";
    int n; cin>>n;
    if(n==1){
        cout<<"Enter a value to insert: ";
        cin>>x;
        arr.push_back(x);
        system("clear");
    }
    else if(n==2){
        cout<<"Select an element from array to delete: ";
        cin>>x;
        auto it=find(arr.begin(),arr.end(),x);
        system("clear");
        if(it==arr.end()){cout<<"Not Found!\n"; continue;}
        arr.erase(it);
    }
    else if(n==3){cout<<"Program End!"; break;}
    else {
        system("clear");
        cout<<"Please enter valid number.";
    }
}


return 0;
}