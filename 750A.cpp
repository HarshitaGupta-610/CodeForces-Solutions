#include<bits/stdc++.h>
using namespace std;
int main(){
 int n , k;
 cin >> n >> k;;
 int  remaining = 240-k;
int sum = (n *(n+1)) / 2;
int probtime = 5 * sum;
if(remaining >= probtime){
    cout<<n<<"\n";
}
else{
    int count = 0;
    int time = 0;
for(int i = 0 ; i < n ;i++){
   time += 5 *(i+1);
    if(time <= remaining){
         count++;
    }
}
cout<<count<<"\n";
}
    return 0;
}
