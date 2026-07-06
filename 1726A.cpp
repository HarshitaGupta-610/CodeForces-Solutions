#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Agar sirf ek element hai to answer 0 hi hoga
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        // Case 0:
        // Kuch change na kare (length 1 ka subarray rotate kar do)
        int ans = a[n - 1] - a[0];

        // Case 1:
        // Last element fix rahega.
        // First element ko a[1...n-1] me se kisi bhi element se bana sakte hain.
        int mini = *min_element(a.begin() + 1, a.end());
        ans = max(ans, a[n - 1] - mini);

        // Case 2:
        // First element fix rahega.
        // Last element ko a[0...n-2] me se kisi bhi element se bana sakte hain.
        int maxi = *max_element(a.begin(), a.end() - 1);
        ans = max(ans, maxi - a[0]);

        // Case 3:
        // Pure array ko rotate karne se kisi bhi adjacent pair
        // (a[i], a[i+1]) ko (last, first) bana sakte hain.
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[i] - a[i + 1]);
        }

        cout << ans << endl;
    }

    return 0;
}
