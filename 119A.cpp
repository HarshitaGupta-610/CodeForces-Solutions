#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    while (true) {
        
        int take = __gcd(a, n);
        if (n < take) {
            cout << 1; 
            break;
        }
        n -= take;
        
        
        take = __gcd(b, n);
        if (n < take) {
            cout << 0; 
            break;
        }
        n -= take;
    }

    return 0;
}
