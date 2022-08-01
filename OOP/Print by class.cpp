//
//  main.cpp
//  Print with class
//
//  Created by Moinul Sourav on 29/12/21.
//

#include <iostream>
using namespace std;

class student{
public:
    char* name;
    int id;
    
    void display(){
        cout<<name<<" "<<id<<endl;
    }
    
    //void set_value(char* x, int y){
      //  name = x;
        //id = y;
    //}
    student(char* x, int y){
        name = x;
        id = y;
    }
};

int main(int argc, const char * argv[]) {
    student sourav("Sourav", 200115);
    //sourav.name =  "Moinul";
    //sourav.id = 200115;
    //cout<<sourav.name<<" "<<sourav.id;
    //sourav.set_value("Moinul Sourav", 200115);
    sourav.display();
    return 0;
}
