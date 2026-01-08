#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {

        if (i != n) {
            for (int j = 1; j < n - i; j++) {
                cout << "  ";
            }
            {
                cout << " ";
            }
        }

        if (i == n) {
            for (int j = 0; j < i; j++) {
                cout << j << " ";
            }
            {
                cout << i;
            }
        } 
        else {
            for (int j = 0; j <= i; j++) {
                cout << " " << j;
            }
        }

        if (i != 0) {
            for (int j = i - 1; j >= 0; j--) {
                cout << " " << j;
            }
        }

        {
            cout << "\n";
        }
    }

    for (int i = n - 1; i >= 0; i--) {

        for (int j = 1; j < n - i; j++) {
            cout << "  ";
        }

        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << " " << j;
        }

        if (i != 0) {
            for (int j = i - 1; j >= 0; j--) {
                cout << " " << j;
            }
        }

        {
            cout << "\n";
        }
    }

    return 0;
}

