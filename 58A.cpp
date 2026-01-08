#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos = -1;
    pos = s.find('h', pos + 1);
    if (pos == -1) { cout << "NO"; return 0; }

    pos = s.find('e', pos + 1);
    if (pos == -1) { cout << "NO"; return 0; }

    pos = s.find('l', pos + 1);
    if (pos == -1) { cout << "NO"; return 0; }

    pos = s.find('l', pos + 1);
    if (pos == -1) { cout << "NO"; return 0; }

    pos = s.find('o', pos + 1);
    if (pos == -1) { cout << "NO"; return 0; }

    cout << "YES";
    return 0;
}
