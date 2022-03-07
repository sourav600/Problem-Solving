#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

class student{
    int roll;
    string name;
public:
    student(int x, string y){
        roll=x;
        name=y;
    }
    int get_roll(){
        return roll;
    }
    string get_name(){
        return name;
    }
};

void swap(student &a, student &b){
    student temp = a;
    a = b;
    b = temp;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int n,x;
    string str;
    cout<<"Number of total student: ";
    cin>>n;
    cout<<"Enter all students roll & name: \n";

    student* info = (student*)malloc(sizeof(student)*n);
    for(int i=0; i<n; i++){
        cin>>x>>str;
        info[i] = student(x,str);
    }
    cout<<"Before sorting:\n";
    for(int i=0; i<n; i++){
        cout<<info[i].get_roll()<<" "<<info[i].get_name()<<endl;
    }
    
    //bubble sort
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1;j++){
            if(info[j].get_roll() > info[j+1].get_roll()){
                //student temp = info[j];
                //info[j] = info[j+1];
                //info[j+1] = temp;
                swap(info[j], info[j+1]);
            }
        }
    }
    cout<<"After Sorting: \n";
     for(int i=0; i<n; i++){
        cout<<info[i].get_roll()<<" "<<info[i].get_name()<<endl;
    }

return 0;
}