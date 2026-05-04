#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> a(7);
        for (int i = 0; i < 7; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int sum_small = 0, sum_big = 0;

        for (int i = 0; i < 6; i++) sum_small += a[i];
        sum_big = a[6];

        cout << (sum_big - sum_small) << '\n';
    }

    return 0;
}
