#include <bits/stdc++.h>
using namespace std;

int parent[2005];
int depth[2005];

int dfs(int x) {
    if (parent[x] == -1)
        return 1;              // root employee

    if (depth[x] != 0)
        return depth[x];       // already calculated

    depth[x] = dfs(parent[x]) + 1;
    return depth[x];
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> parent[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dfs(i));
    }

    cout << ans << endl;
    return 0;
}
