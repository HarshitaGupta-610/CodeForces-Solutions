#include <iostream>
#include <vector>
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

        vector<int> lis;

        for (int x : a) {
            int pos = -1;
            for (int i = 0; i < (int)lis.size(); i++) {
                if (lis[i] > x) {
                    pos = i;
                    break;
                }
            }

            if (pos == -1) {
                lis.push_back(x);
            } else {
                lis[pos] = x;
            }
        }

        cout << n - lis.size() << endl;
    }

    return 0;
}
