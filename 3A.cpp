#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int x1 = s[0] - 'a';
    int y1 = s[1] - '1';
    int x2 = t[0] - 'a';
    int y2 = t[1] - '1';

    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int moves = max(dx, dy);
    cout << moves << "\n";

    while (x1 != x2 || y1 != y2) {
        string step = "";

        if (x1 < x2) { 
            step += "R"; 
            x1++; 
            
        }
        else if (x1 > x2) { 
            step += "L";
            x1--; 
            
        }

        if (y1 < y2) { 
            step += "U"; 
            y1++;
            }
        else if (y1 > y2) {
            step += "D";
            y1--; 
            
        }

        cout << step << "\n";
    }

    return 0;
}
