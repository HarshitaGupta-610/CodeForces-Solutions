#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    char d = grid[0][0];      // diagonal character
    char o = grid[0][1];      // non-diagonal character

    if (d == o) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                if (grid[i][j] != d) {
                    cout << "NO";
                    return 0;
                }
            } else {
                if (grid[i][j] != o) {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }

    cout << "YES";
    return 0;
}
