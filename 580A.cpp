#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    vector<int>dp(n+1 , 0);
    dp[0] = 1;
    int maxi = 1;
    for(int i = 1 ; i < n ; i++){
        if(a[i] >= a[i-1]){
            dp[i] = dp[i-1] + 1;
        }
        else{
            dp[i] = 1;
        }
        maxi = max(dp[i] , maxi);
    }
    cout<<maxi<<endl;
    return 0;
}
