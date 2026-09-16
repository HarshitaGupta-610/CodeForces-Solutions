#include<bits/stdc++.h>
using namespace std;
int main(){
  int k , n , w;
  cin >> k >> n >>w;
  int money = 0 ; 
  for(int i = 1 ; i <= w ; i++){
    money += k*i;
  }
  cout<<max(0,money-n)<<endl;
  return 0;
}
