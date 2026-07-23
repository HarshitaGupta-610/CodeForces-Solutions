#include <bits/stdc++.h>
using namespace std;

long long ways(long long len, long long k) {

    if (len < k)
        return 0;

    long long x = len - k + 1;
    return x * (x + 1) / 2;
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k, q;
        cin >> n >> k >> q;

        long long ans = 0;
        int len = 0;

        for (int i = 0; i < n; i++) {

            int x;
            cin >> x;

            if (x <= q) {
                len++;          // Current valid block badh raha hai
            }
            else {
                ans += ways(len, k); // Block khatam, contribution add karo
                len = 0;
            }
        }

        // Last block ke liye
        ans += ways(len, k);

        cout << ans << endl;
    }

    return 0;
}
