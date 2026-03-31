#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    unordered_map<int , int>mapo;
    int maxi = 0;
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mapo[a[i]]++;
        maxi = max(maxi  ,a[i]);
    }
    vector<long long >points(maxi + 1 ,0);
    for(int i = 1 ; i <= maxi ; i++){
       points[i] = 1LL *i* mapo[i];
    }
    
    vector<long long>dp(maxi + 1 , 0);
    dp[0] = 0;
    dp[1] = points[1];
    for(int i = 2 ; i <= maxi ; i++){
        dp[i] = max(dp[i-1] , dp[i-2] + points[i]);
    }
    cout<<dp[maxi];
}
