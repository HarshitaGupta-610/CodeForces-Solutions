#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t;
  cin >> t;
    while (t--) {
        int n;
        cin >> n;
vector<int> a(n);
int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0)  even++;
               else odd++;
        }
        if (odd % 2 == 0 && even % 2 == 0) {
            cout << "YES" << endl;
            continue;
        }
        sort(a.begin(), a.end());
bool found = false;
for (int i = 0; i < n - 1; i++) {
            if (abs(a[i] - a[i + 1]) == 1) {
                found = true;
                break;
            }
        }
 
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}
