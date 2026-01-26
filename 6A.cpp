#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    
    bool triangle = false, segment = false;

    for (int i = 0; i < 2; i++) {
        int x = a[i], y = a[i+1], z = a[i+2];

        if (x + y > z) {
            triangle = true;
        }
        else if (x + y == z) {
            segment = true;
        }
    }

    if (triangle){
        cout << "TRIANGLE";
    } 
    else if (segment) {
        cout << "SEGMENT";
        
    }
    else{
        cout << "IMPOSSIBLE";
    } 

    return 0;
}
