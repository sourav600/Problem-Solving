#include<bits/stdc++.h>
using namespace std;

#define nl '\n'

bool isValid(int x, int y, int n, int m) {
    return x < 0 || x >= n || y < 0 || y >= m;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m;
    cin >>n>>m;
    vector<string> s(n);

    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    char directions[] = {'N', 'S', 'W', 'E'};

    vector<vector<bool>> vis(n, vector<bool>(m, false));

    int row = 0, col = 0;
    int ct = 0;

    while (true) {
        if (isValid(row, col, n, m)) {
            cout << "Out" << endl;
            return 0;
        }
        if (s[row][col] == 'X') {
            cout << ct << nl;
            return 0;
        }

        if (vis[row][col]) {
            cout << "Lost\n";
            return 0;
        }
        vis[row][col] = true;

        char direction = s[row][col];
        int it = -1;
        for (int i = 0; i < 4; ++i) {
            if (direction == directions[i]) {
                it = i;
                break;
            }
        }

        row += dx[it];
        col += dy[it];
        ++ct;
    }

    return 0;
}
