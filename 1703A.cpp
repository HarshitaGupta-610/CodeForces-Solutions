#include <bits/stdc++.h>
using namespace std;

string to_lower(string s) {
    for (char &c : s){ 
        c = tolower(c);
    }
    return s;
}

int main(){
   int t;
   cin >> t;
   while(t--){
      string s;
      cin >> s;
      s = to_lower(s);

      if (s == "yes"){
         cout << "YES"<<endl;
      }
      else{
         cout << "NO"<<endl;
      }
   }
}
