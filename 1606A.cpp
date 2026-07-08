#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();

        // Agar first aur last character same hain,
        // to AB == BA already hoga.
        if (s[0] == s[n - 1]) {
            cout << s << endl;
        }
        else {
            // Agar different hain, to sirf ek character change karna hai.
            // Last character ko first ke equal bana dete hain.

            s[n - 1] = s[0];

            cout << s << endl;
        }
    }

    return 0;
}
