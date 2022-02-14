//
//  main.cpp
//  11777 - Automate the Grades
//
//  Created by Moinul Sourav on 5/12/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,loop = 1;;
    scanf("%d",&t);
    while(t--){
        
        int t1,t2,f,a,arr[3],best1;
        scanf("%d%d%d%d",&t1,&t2,&f,&a);
        for(int i=0; i<3;i++) scanf("%d",&arr[i]);
        
        if(arr[0]<=arr[1] && arr[0]<=arr[2]) best1 = (arr[1]+arr[2])/2;
        else if(arr[1]<=arr[0] && arr[1]<=arr[2]) best1 = (arr[0]+arr[2])/2;
        else best1 = (arr[0]+arr[1])/2;
        
        int total = t1+t2+f+a+best1;
        
        cout<<"Case "<<loop++<<": ";
        
        if(total>=90) cout<<"A"<<"\n";
        else if(total>=80) cout<<"B"<<"\n";
        else if(total>=70) cout<<"C"<<"\n";
        else if(total>=60) cout<<"D"<<"\n";
        else cout<<"F"<<"\n";
        
        
    }
    
    return 0;
}
