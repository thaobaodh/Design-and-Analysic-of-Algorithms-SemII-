#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, c1, c2, c3;
    cin >> n >> m;
    vector<vector<int>> graph(n, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        cin >> c1 >> c2;
        graph[c1][c2] = 1;
        graph[c2][c1] = 1;
    }
    cin >> c1 >> c2 >> c3;
    int ans = INT_MAX;
    for (int i = 0; i < c1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c3; k++) {
                int tmp = i * c2 * c3 + j * c3 + k;
                int tmp2 = 0;
                for (int v = 0; v < n; v++) {
                    for (int u = 0; u < n; u++) {
                        if (graph[v][u] == 1) {
                            if (v == u) {
                                tmp2++;
                            } else {
                                if (tmp & (1 << v) & (1 << u)) {
                                    tmp2++;
                                }
                            }
                        }
                    }
                }
                ans = min(ans, tmp2);
            }
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
