#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allUpper = true;
    bool allUpperExceptFirst = true;

    for (int i = 0; i < s.size(); i++) {
        if (!(s[i] >= 'A' && s[i] <= 'Z')) {
            allUpper = false;
        }
    }

    for (int i = 1; i < s.size(); i++) {
        if (!(s[i] >= 'A' && s[i] <= 'Z')) {
            allUpperExceptFirst = false;
        }
    }

    if (allUpper || allUpperExceptFirst) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] - 'A' + 'a'; 
            }  
            else{
                s[i] = s[i] - 'a' + 'A'; 
            }  
        }
    }

    cout << s;
    return 0;
}
