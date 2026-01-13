#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k == 1) {
            cout << n << "\n";
            continue;
        }

        long long op = 0;

        while (n > 0) {
            op += n % k;
            n /= k;
        }

        cout << op << "\n";
    }

    return 0;
}
