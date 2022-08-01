#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

class students{
    string name;
    int roll;
    float gpa;
public:
    students(string x, int y, float z){
        name = x;
        roll = y;
        gpa = z;
    }
    string get_name(){
        return name;
    }
    int get_roll(){
        return roll;
        }
    float get_gpa(){
        return gpa;
    }

};

void swap(students &a, students &b){
    students temp = a;
    a = b;
    b = temp;
}

void bubble(students data[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(data[j].get_gpa() <= data[j+1].get_gpa()) swap(data[j], data[j+1]);
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cout<<"Number of student: ";
    cin>>n;

    students* info = (students*) malloc(sizeof(students) * n);

    string str;
    int r;
    float g;
    cout<<"Enter all students Name, Roll & GPA: \n";
    for(int i=0; i<n; i++){
        cin>>str>>r>>g;
        info[i] = students(str,r,g);
    }
    cout<<"\nBefore Sorting: \nName: Roll: GPA:\n";
    for(int i=0; i<n; i++) cout<<info[i].get_name()<<" "<<info[i].get_roll()<<" "<<info[i].get_gpa()<<endl;

    bubble(info,n);
    cout<<"\nAfter sorting\nName: Roll: GPA:\n";
    for(int i=0; i<n; i++) cout<<info[i].get_name()<<" "<<info[i].get_roll()<<" "<<info[i].get_gpa()<<endl;

return 0;
}