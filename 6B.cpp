#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    char c;

    cin >> n >> m >> c;

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    set<char> st;
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (grid[i][j] == c) {
                for (int k = 0; k < 4; k++) {

                    int nr = i + dr[k];
                    int nc = j + dc[k];
                    if (nr >= 0 && nr < n && nc >= 0 && nc < m) {

                        char neighbour = grid[nr][nc];
                        if (neighbour != '.' && neighbour != c) {
                            st.insert(neighbour);
                        }
                    }
                }
            }
        }
    }

    cout << st.size();

    return 0;
}
