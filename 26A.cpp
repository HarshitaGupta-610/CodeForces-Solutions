#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        int primeDivisors = 0;

        for (int j = 2; j <= i; j++) {
            if (i % j == 0 && IsPrime(j)) {
                primeDivisors++;
            }
        }

        if (primeDivisors == 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
