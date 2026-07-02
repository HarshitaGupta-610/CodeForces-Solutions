#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a(n);
    ll total_sum = 0;
    ll max_beauty = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
        max_beauty += (a[i] + x - 1) / x;
    }

    ll min_beauty = (total_sum + x - 1) / x;

    cout << min_beauty << " " << max_beauty << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
