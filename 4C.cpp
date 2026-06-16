#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,int>count;
    set<string>already;
   while(n--){
       string s;
       cin >>s;
       if(already.find(s) == already.end()){
           already.insert(s);
           count[s] = 1;
           cout<<"OK"<<endl;
       }
       else{
           string nahi = s + to_string(count[s]);
           count[s]++;
           already.insert(nahi);
           cout<<nahi<<endl;
       }
   }
    return 0;
}
