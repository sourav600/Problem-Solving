//
//  main.cpp
//  Date of Birth
//
//  Created by Moinul Sourav on 28/12/21.
//

#include<iostream>
#include<ctime>
using namespace std;

class Human{

    int byear,bmon,bday;
    int get_day(){
        int day;
        time_t t = time(NULL);
        tm* ct = gmtime(&t);
        int cd = ct->tm_mday;
        
        if(bday>cd) {
            day = 30 + cd - bday;
            bmon += 1;
        }
        else day = cd - bday;
        
        return day;
    }
    
    int get_month(){
        int month;
        time_t t = time(NULL);
        tm* ct = gmtime(&t);
        int cm = ct->tm_mon+1;
        
        if(bmon>cm) {
            month = 12 + cm - bmon;
            byear += 1;
        }
        else month = cm - bmon;
        
        return month;
    }
    int get_year(){
        time_t t = time(NULL);
        tm* ct = gmtime(&t);
        int cy = ct->tm_year + 1900;
        int year = cy - byear;
        return year;
    }
    
public: 
    Human(int by, int bm, int bd){
        byear = by;
        bmon = bm;
        bday = bd;
    }
    void display(){
        cout<<"Age:\nDay: "<<get_day()<<"\nMonth: "<<get_month()<<"\nYear: "<<get_year()<<endl;
    }
};

int main(){
    int y,m,d;
    cout<<"Enter your Birthday: ";
    cin>>d>>m>>y;

    Human sourav(y,m,d);
    sourav.display();
    
    return 0;
}
