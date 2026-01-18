#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a , b;
    cin >> a >> b;
    int c = a + b;
    string A  , B , C;
    A = to_string(a);
    B = to_string(b);
    C = to_string(c);
    string af = "" , bf = "" , cf = "";
    for(char ch : A){
        if(ch != '0'){
            af += ch;
        }
    }
    for(char ch : B){
        if(ch != '0'){
            bf += ch;
        }
    }
    for(char ch : C){
        if(ch != '0'){
            cf += ch;
        }
    }
    int finala = stoi(af);
    int finalb = stoi(bf);
    int finalc = stoi(cf);
      int ans = finala + finalb;
      if(finalc == ans){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
      return 0;
}
