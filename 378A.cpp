#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int countA = 0, countB = 0, countDraw = 0;

    for (int x = 1; x <= 6; x++) {

        if (abs(a - x) < abs(b - x)) {
            countA++;
        }
        else if (abs(a - x) > abs(b - x)) {
            countB++;
        }
        else {
            countDraw++;
        }
    }

    cout << countA << " " << countDraw << " " << countB << endl;

    return 0;
