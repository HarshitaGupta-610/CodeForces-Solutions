#include<bits/stdc++.h>
using namespace std;
 
bool has8(long long n){
    string s = to_string(n);
    return s.find('8') != -1; 
}
 
int main(){
    long long a;
    cin >> a;
 
    long long b = 1;
 
    while (!has8(a + b)) {
        b++;
    }
 
    cout << b << endl;
    return 0;
}
