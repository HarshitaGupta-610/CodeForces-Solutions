#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        // Step 1: check arithmetic progression
        long long A = a[1] - a[0];
        bool ok = true;
 
        for (int i = 2; i < n; i++) {
            if (a[i] - a[i - 1] != A) {
                ok = false;
                break;
            }
        }
 
        if (!ok) {
            cout << "NO\n";
            continue;
        }
 
        // Step 2: check feasibility of x, y
        long long B = a[0] - A;          // B = y*(n+1)
 
        if (B < 0 || B % (n + 1) != 0) {
            cout << "NO\n";
            continue;
        }
 
        long long y = B / (n + 1);
        long long x = A + y;
 
        if (x < 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
 
    return 0;
}

