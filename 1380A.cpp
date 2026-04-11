#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }

        vector<int> left(n), right(n);

        left[0] = -1;
        int minIdx = 0;
        for(int i = 1; i < n; i++){
            if(a[i-1] < a[minIdx]){
                minIdx = i-1;
            } 
            left[i] = minIdx;
        }

        right[n-1] = -1;
        minIdx = n-1;
        for(int i = n-2; i >= 0; i--){
            if(a[i+1] < a[minIdx]) {
                minIdx = i+1;
            }
            right[i] = minIdx;
        }

        bool found = false;

        for(int j = 1; j < n-1; j++){
            int i = left[j];
            int k = right[j];

            if(i != -1 && k != -1 && a[i] < a[j] && a[k] < a[j]){
                cout << "YES\n";
                cout << i+1 << " " << j+1 << " " << k+1 << "\n";
                found = true;
                break;
            }
        }

        if(!found) cout << "NO\n";
    }
    return 0;
}
