#include <bits/stdc++.h>
using namespace std;
 
int countfibo(vector<int>& v) {
    int num = 0;
    for (int i = 2; i <= 4; i++) {
        if (v[i] == v[i - 1] + v[i - 2]) {
            num++;
        }
    }
    return num;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, d, e;
        cin >> a >> b >> d >> e;
int c1 = e - d;  
int c2 = a + b;   
int c3 = d - b;  
vector<int> v1 = {a, b, c1, d, e};
vector<int> v2 = {a, b, c2, d, e};
vector<int> v3 = {a, b, c3, d, e};
int ans = max({countfibo(v1),countfibo(v2),countfibo(v3)});
cout << ans << endl;
    }
 
    return 0;
}
