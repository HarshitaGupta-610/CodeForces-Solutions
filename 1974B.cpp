
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
         set<char> sti;
         for(int i = 0 ; i <n ;i++){
             sti.insert(s[i]);
         }
         vector<char> v(sti.begin(), sti.end());
         unordered_map<char , char>mp;
         for(int j = 0 ; j < v.size() ; j++){
            mp[v[j]] = v[v.size() - 1 - j];
         }
         for(int i = 0 ; i < n ; i++){
            s[i] = mp[s[i]];
         }
         cout<<s<<endl;
 
    }
    return 0;
}
