#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    // If already one-digit → no operations
    if (n.size() == 1) {
        cout << 0;
        return 0;
    }

    int steps = 0;

    // First sum of digits from huge string
    long long sum = 0;
    for (char c : n) sum += (c - '0');
    steps++;

    // Continue until sum becomes one-digit
    while (sum >= 10) {
        long long newSum = 0;
        while (sum > 0) {
            newSum += sum % 10;
            sum /= 10;
        }
        sum = newSum;
        steps++;
    }

    cout << steps;
    return 0;
}
