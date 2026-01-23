#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
 
    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
 
        vector<int> a(n);
        for (int i = 0  ; i < n ;i++){
            cin >> a[i];
        } 
        int R = 0, C = 0, O = 0;
 
        for (int x : a) {
            if (x <= h){
                 R++;
            }
            if (x <= l){
                C++;
            } 
            if (x <= min(h, l)){
                O++;
            } 
        }
 
        int pairs = n / 2;
 
        int ans = min( min(R, C), min((R + C - O) / 2, pairs) );
 
        cout << ans << "\n";
    }
 
    return 0;
}
