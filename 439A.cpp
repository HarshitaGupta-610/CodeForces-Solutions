#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    int required = sum + 10 * (n - 1);

    if (required > d) {
        cout << -1;
        return 0;
    }

    int jokes = 2 * (n - 1);  
    jokes += (d - required) / 5; 

    cout << jokes;

    return 0;
}
