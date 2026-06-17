#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> sti;
    for(int i = 0 ; i < s.size();i++){
        sti.insert(s[i]);
    }
    if(sti.size() % 2 != 0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
      cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
    }
