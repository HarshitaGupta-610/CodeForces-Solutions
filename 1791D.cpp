#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >>n;
        string s;
        cin >>s;
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        set<char>seen;
        seen.insert(s[0]);
        prefix[0] = 1, suffix[n-1] = 1;
        for(int i = 1 ; i < n ; i++){
            if(seen.find(s[i]) == seen.end()){
            seen.insert(s[i]);
            prefix[i] = prefix[i-1] + 1;
            }else{
                prefix[i] = prefix[i-1];
            }
        }
        set<char>unseen;
        unseen.insert(s[n-1]);
        for(int i =n-2;i>= 0;i--){
            if(unseen.find(s[i]) == unseen.end()){
                unseen.insert(s[i]);
                suffix[i] = suffix[i+1] +1;
            }else{
                suffix[i] = suffix[i+1];
            }
        }
        int ans = INT_MIN;
        for(int i = 0 ; i < n-1 ; i++){
            ans = max(ans,suffix[i+1] + prefix[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
