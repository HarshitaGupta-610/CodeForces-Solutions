#include<iostream>
#include<vector>
using namespace std;
int main(){
int n ;
cin >> n ; 
vector<int>A(7);
for(int i = 0 ; i < 7 ; i++){
    cin >> A[i];
}
int sum = n;
int i = 0;
while(sum > 0){
    sum = sum - A[i];
    if(sum <= 0){
        cout<< i+1<<endl;
        return 0;
    }
     i = (i + 1) % 7 ;
}
 
}
