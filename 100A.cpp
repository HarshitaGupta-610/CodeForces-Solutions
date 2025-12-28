#include <iostream>
using namespace std;

int main() {
    long long n, k, m;
    cin >> n >> k >> m;

    long long perSide = (n + m - 1) / m;  
    if (perSide * perSide <= k)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
