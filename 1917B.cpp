#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 0;
    ll distinct = 0;

    vector<int> seen(26, 0);

    for (char c : s) {
        int x = c - 'a';

        if (!seen[x]) {
            seen[x] = 1;
            distinct++;   
        }

        ans += distinct;  
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
