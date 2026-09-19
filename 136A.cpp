#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
vector<int>a(n+1);
  unordered_map<int,int>m;
  for(int i = 1 ; i <= n ; i++) {
    cin >> a[i];
  m[a[i] ]= i;
  }
  vector<int>ans(n+1);
  for(int i = 1 ; i <= n ; i++){
    ans[i] = m[i];
  }
  for(int i = 1 ; i <= n ; i++){
cout<<ans[i]<<" " ;
  }
  return 0;
}
