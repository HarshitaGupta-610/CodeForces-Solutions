#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);

    vector<int> p, m, s;  

    for (int i = 0; i < n; i++) {
        cin >> t[i];
        if (t[i] == 1){
          p.push_back(i + 1);
        }
        else if (t[i] == 2) {
         m.push_back(i + 1);
        }
        else{
         s.push_back(i + 1);
        } 
    }

    int teams = min({ p.size(), m.size(), s.size() });

    cout << teams << "\n";

    for (int i = 0; i < teams; i++) {
        cout << p[i] << " " << m[i] << " " << s[i] << "\n";
    }

    return 0;
}
