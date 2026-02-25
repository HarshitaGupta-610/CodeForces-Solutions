#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string x;
        cin >> x;
 
        int sum = 0;
        for (char c : x)
            sum += (c - '0');
 
        if (sum <= 9) {
            cout << 0 << endl;
            continue;
        }
 
        int extra = sum - 9;
        int moves = 0;
 
        // Store digits withsition
        vector<pair<int,int>> digits;
 
        for (int i = 0; i < x.size(); i++) {
            digits.push_back({x[i] - '0', i});
        }
 
        sort(digits.rbegin(), digits.rend()); // descending
 
        for (auto &p : digits) {
            int digit = p.first;
            int pos = p.second;
 
            int reduction;
 
            if (pos == 0) {
                reduction = digit - 1;
            } else {
                reduction = digit;
            }
 
            if (reduction <= 0) continue;
 
            extra -= reduction;
            moves++;
 
            if (extra <= 0)
                break;
        }
 
        cout << moves << endl;
    }
}
