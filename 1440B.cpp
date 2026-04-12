#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<long long> a(n * k);
        for (auto &x : a){
            cin >> x;
        } 

        int m = (n + 1) / 2;
        int step = n - m + 1;

        long long ans = 0;
        int i = n * k - step;

        for (int j = 0; j < k; j++) {
            ans += a[i];
            i -= step;
        }

        cout << ans << endl;
    }
}
