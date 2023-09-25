#include<bits/stdc++.h>
using namespace std;

double func(double x){
    return (x*x*x)-(x*x)+2;
}


void bisection(double a, double b){
    if(func(a) * func(b) >= 0){
        cout<<"Invalid value of a, b\n";
        return;
    }

    double x;
    while(b-a >= 0.01){

        x = (a+b)/2.00;

        if(func(x)==0.0){
            break;
        }
        else if(func(x) * func(a) <= 0) b=x;
        else a=x;
    }
    cout<<"The root is: "<<x<< endl;
}

int main(){

    double a=-3.00, b=1.00;
    bisection(a,b);

return 0;
}



