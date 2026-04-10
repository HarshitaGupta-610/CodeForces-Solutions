#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
       int ones = 0 , zeroes = 0;
       for(char c : s){
           if(c == '1'){
               ones++;
           }
           else{
               zeroes++;
           }
       }
       int ansu = min(zeroes , ones);
       if(ansu % 2 == 0){
           cout<<"NET"<<endl;
       }
       else{
           cout<<"DA"<<endl;
       }
        }

        return 0;
    }
