#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , S;
    cin >> n >> S;
    int count = 0;
    if( S % n == 0){
        cout<<(S / n)<<endl;
    }
    else{
        cout<<(S / n) + 1<<endl;
    }
    return 0;
}
