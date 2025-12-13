#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long count = 0;

    // Check every ordered pair
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j) continue;  // cannot pick same soldier

            if (abs(a[i] - a[j]) <= d) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
