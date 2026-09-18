#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ;
  cin >> n;
int cap = 0;
  int maxi = INT_MIN;
  while(n--){
    int a , b;
    cin >> a >> b;
    cap -= a;
    cap +=b;
    maxi = max(cap,maxi);
  }
  cout<<maxi<<endl;
  return 0;
  
}
