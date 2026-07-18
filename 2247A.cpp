#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int p = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) p++;
        }

        if (n % 2) {
            cout << "NO\n";
        } else {
            int k = abs(p - n / 2);
            cout << (k % 2 == 0 ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
