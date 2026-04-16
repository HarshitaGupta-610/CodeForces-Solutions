#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string prev = "";

    for(int i = 0; i < n; i++) {
        string row;
        cin >> row;

        
        for(int j = 1; j < m; j++) {
            if(row[j] != row[0]) {
                cout << "NO\n";
                return 0;
            }
        }

        if(i > 0 && row[0] == prev[0]) {
            cout << "NO\n";
            return 0;
        }

        prev = row;
    }

    cout << "YES\n";
}
