#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
 


class Innings{
    int run, wicket;
public:

    Innings(){
        run=0, wicket=0;
    }
    int get_run(){
        return run;
    }
    int get_wicket(){
        return wicket;
    }
    void score(int r, string w){
        run += r;
        if(w=="out") wicket+=1;
    }
};

class Ball{
public:
    
    virtual void calculate(int r,string w, Innings &s)=0;
};

class invalid: public Ball{
public:
     void calculate(int r, string w, Innings &s){
        s.score(r+1, "notout"); //extra 1 run for No ball
     }
};
class valid: public Ball{
public:
     void calculate(int r, string w,Innings &s){
        s.score(r, w);
     }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    Ball *b;
    invalid noball;
    valid validball;
    Innings inn[2];
    
    cout<<"Each Innings have 12 balls and 5 Wicket.\n";

    for(int i=0; i<2; i++){
        int run, ball=0;
        string status, wicket;
        cout<<"Innings "<<i+1<<endl;
        
        while(ball<12 && cin>>status>>wicket>>run && inn[i].get_wicket()<5){
            cout<<status<<" "<<wicket<<" "<<run<<endl;
            //cin.ignore();
            if(status=="valid"){
                b = &validball;
                ball++;
            }
            else b = &noball;

            b->calculate(run, wicket, inn[i]);
            cout<<"Ball "<<ball<<", "<<"Score: "<<inn[i].get_run()<<"/"<<inn[i].get_wicket()<<endl;
            //cin.ignore();
        }
        
        if(ball>=12 && inn[i].get_wicket()==5) cout<<"No ball left & All Batsman out. Innings "<<i+1<<" over.\n";
        else if(ball>=12) cout<<"No ball left. Innings "<<i+1<<" is Over\n";
        else if(inn[i].get_wicket()==5) cout<<"All Batsman Out. Innings "<<i+1<<" is Over\n"; 
        cout<<"Total run for Innings "<<i+1<<": "<<inn[i].get_run()<<endl;  
    }
    if(inn[0].get_run()>inn[1].get_run()) cout<<"\nTeam A win by "<<inn[0].get_run()-inn[1].get_run()<<" Run\n";
    else if(inn[0].get_run()==inn[1].get_run())cout<<"\nMatch Draw\n";
    else cout<<"\nTeam B win by "<<inn[1].get_run()-inn[0].get_run()<<" Run\n";
    
return 0;
}

// valid notout 2
// invalid out 3
// valid out 0
// valid notout 6
// valid out 2
// valid out 0
// valid notout 1
// valid notout 6
// valid out 2
// valid notout 1
// valid notout 2
// valid notout 2
// valid out 2

// valid notout 2
// invalid out 3
// valid out 0
// valid notout 6
// valid out 2
// valid out 0
// valid notout 1
// valid notout 6
// valid out 2
// valid notout 1
// valid notout 2
// valid notout 2
// valid out 2