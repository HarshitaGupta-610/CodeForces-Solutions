#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
     vector<int>a(n);
     int total = 0;
     for(int i = 0 ; i <  n ; i++){
         cin >>a[i];
         total += a[i];
     }
     int count = 0;
     int mine = 0;
     sort(a.begin() , a.end());
     for(int i = n -1 ; i >= 0 ; i--){
         mine+=a[i];
         count++;
         if(total - mine < mine){
             cout<<count;
             break;
         }
     }
    return 0;
}
