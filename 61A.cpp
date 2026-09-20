#include<bits/stdc++.h>
using namespace std;
int main(){
  string n1 , n2;
  cin >> n1 >>n2;
  string  s = "";
  for(int i = 0 ; i < n1.size();i++){
    if(n1[i] == n2[i]) s+= '0';
    else s += '1';
  }
  cout<<s<<endl;
  return 0;
}
