#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i = s.size() - 1;

    while (i >= 0 && !isalpha(s[i])) {
        i--;
    }

    char last = tolower(s[i]);  

   
    if (last=='a' || last=='e' || last=='i' || last=='o' || last=='u' || last=='y')
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
