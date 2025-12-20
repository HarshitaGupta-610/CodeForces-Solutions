#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
string s;
cin >> s;
    for (char &c : s) {
        c = tolower(c);
    }

    unordered_map<char, int> mpi;
    for (char c : s) {
        mpi[c]++;
    }


    for (char c = 'a'; c <= 'z'; c++) {
        if (mpi[c] == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
