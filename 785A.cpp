#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    unordered_map<char , int> mp;  
    mp['T'] = 4;  
    mp['C'] = 6;
    mp['O'] = 8;
    mp['D'] = 12;
    mp['I'] = 20;

    int total = 0;

    while(n--){
        string s;        
        cin >> s;
        total += mp[s[0]];
    }

    cout << total << endl;
}
