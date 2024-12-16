#include<bits/stdc++.h>
using namespace std;

#define nl '\n'

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    std::unordered_set<std::string> wordSet;
    std::vector<std::string> words, compoundWords;
    std::string word;

    while (cin >> word) {
        words.push_back(word);
        wordSet.insert(word);
    }

    // Finding compound words
    for (string &cur : words) {
        int length = cur.length();
        for (int i = 1; i < length; ++i) {
            string l = cur.substr(0, i);
            string r = cur.substr(i);

            if (wordSet.count(l) && wordSet.count(r)) {
                cout<<cur<<nl;
                break;
            }
        }
    }


return 0;
}



