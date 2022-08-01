//
//  main.cpp
//  Employ Salary
//
//  Created by Moinul Sourav on 3/1/22.
//

#include <iostream>
using namespace std;

class Employ{
    int basic,bonus1,bonus2;
    int get_value(){
        int total_bonus;
        total_bonus = (basic/100)*bonus1 + (basic/100)*bonus2 ;
        return total_bonus+basic;
    }
public:
    Employ(int b){
        basic = b;
    }
    void set_value(int b1, int b2){
        bonus1 = b1;
        bonus2 = b2;
    }
    void display(){
        cout<<"Total Salary: "<<get_value()<<endl;
    }
    
};


int main(int argc, const char * argv[]) {
    
    int basic,bonus1,bonus2;
    cout<<"Enter Basic Salary: ";
    cin>>basic>>bonus1>>bonus2;
    Employ sourav(basic);
    sourav.set_value(bonus1, bonus2);
    sourav.display();
    return 0;
}
