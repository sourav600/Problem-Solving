#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    int size = 0;
    vector<string> anna;
    map<string, int> word;

    while(cin>>str && str!="#"){
        anna.push_back(str); // store main word in vector
       transform(str.begin(), str.end(), str.begin(),::tolower); 
       sort(str.begin(), str.end()); //lowercase word sort 
       word[str]++; //lowercase sorted word store in map 
       size++; 
    }

    sort(anna.begin(), anna.end()); //sort all word lexicographically in vector

    //output
    for(int i=0; i<size; i++){
        string temp = anna[i];
        transform(temp.begin(), temp.end(),temp.begin(), ::tolower);
        sort(temp.begin(), temp.end());
        if(word[temp]==1) cout<<anna[i]<<endl;
    }

return 0;
}
