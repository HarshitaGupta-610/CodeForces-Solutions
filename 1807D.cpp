#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<ll> a(n + 1);
    vector<ll> pref(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
    
    ll totalSum = pref[n];
    
    while (q--) {
        int l, r;
        ll k;
        cin >> l >> r >> k;
        ll rangeSum = pref[r] - pref[l - 1];
        ll newSum = totalSum - rangeSum + ((r - l + 1) * k);
        
        if (newSum % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
