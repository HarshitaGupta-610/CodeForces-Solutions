#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int n = 1;
    while (true) {
        int lastDigit = (n * k) % 10;

        if (lastDigit == 0 || lastDigit == r) {
            cout << n;
            break;
        }

        n++;
    }
}
