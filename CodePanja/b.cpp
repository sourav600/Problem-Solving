#include<bits/stdc++.h>

using namespace std;

#define nl '\n'

int dp[502][1002];
void SOURAV(int tc){
    int n, k;
    cin >> n>>k;

    vector<int> a(n+1, 0),prefix(n+1, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }

    for (int j = 1; j <= k; ++j) {
        for (int i = j; i <= n; ++i) {
            dp[i][j] = 0;
            for (int p = j - 1; p < i; ++p) {
                int sum = prefix[i] - prefix[p];
                int length = i - p;
                dp[i][j] = max(dp[i][j], dp[p][j - 1] + sum * length);
            }
        }
    }

    cout << dp[n][k] << endl;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    SOURAV(1);

return 0;
}



