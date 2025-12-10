#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    if (!(cin >> a >> b >> c)) {
        return 0;
    }
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    int x = v[0], y = v[1], z = v[2];

    int ans = 0;
    if (x + y <= z) {
        ans = z - (x + y) + 1;
    }

    cout << ans << endl;
    return 0;
}
