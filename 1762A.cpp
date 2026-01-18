#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        if(sum % 2 == 0){
            cout << 0 << "\n";
            continue;
        }

        int ans = 0;

        for(int x : a){
            int ops = 0;
            int temp = x;

            while(temp % 2 == x % 2){
                temp /= 2;
                ops++;
            }
            ans = min(ans, ops);
        }

        cout << ans << "\n";
    }
    return 0;
}
