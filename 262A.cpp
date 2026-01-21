#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 0 ; i< n ; i++){
        int x ;
        cin >> x;
        int lucky = 0;
        while(x!= 0){
            int digit = x % 10;
            if(digit == 4 || digit == 7){
                lucky++;
            }
            x/=10;
        }
        if(lucky <= k){
            ans++;
        }
    }
    cout<<ans<<endl;
}
