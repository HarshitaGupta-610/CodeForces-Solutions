#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ;
  cin >> n;
  vector<int>a(n);
int police = 0;
int ans  = 0;
  for(int i = 0 ; i < n ; i++) {
    cin >> a[i];
  if(a[i] > 0 ) police+=a[i];
    else {
      if(police > 0) police--;
      else ans++;
    }
  }
    cout<<ans<<endl;
  return 0;
}
