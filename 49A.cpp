#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int i = n - 1;

    while (i >= 0 && !isalpha(s[i])) {
        i--;
    }

    char c = tolower(s[i]);  

    if (c == 'a' || c == 'o' || c == 'e' || c == 'i' || c == 'u' || c == 'y') {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
