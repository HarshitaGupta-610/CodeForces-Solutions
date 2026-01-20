#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int j = 0; //string s

    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[j]) {
            j++;
        }
    }

    
    cout << j + 1 << endl;

    return 0;
}
