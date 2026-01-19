#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;

        vector<long long> a(k);
        for(int i = 0 ; i < k ; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());  

        long long target = k - 2;  

       
        for(long long x : a){
            if(x == 0){
                 continue;
            }
            if(target % x != 0) {
                continue;
            }

            long long y = target / x;

           
            if(binary_search(a.begin(), a.end(), y)){
                cout << x << " " << y << "\n";
                break;
            }
        }
    }

    return 0;
}
