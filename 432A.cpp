#include<bits/stdc++.h>
using namespace std;
int main(){
  int n , k;
  cin >> n >> k;
  int ans = 0;
  vector<int>a(n);
  for(int i = 0 ; i < n ; i++){
    cin >> a[i];
    if(a[i] + k <= 5) ans++;
  }
  cout<<ans/3<<endl;
  return 0;
}
