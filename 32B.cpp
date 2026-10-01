#include<iostream>
using namespace std;
#include<string.h>
int main(){
    string s;
    cin >> s;
    int n = s.size();
    string ans;
    for(int i = 0 ; i < n ; ){
        if(s[i] == '.'){
            ans += '0';
            i++;
        }
        else if( s[i]== '-' && s[i+1] == '.' ){
            ans += '1';
            i+=2;
        }
        else {
            ans += '2';
            i+=2;
        }
    }
    cout<<ans<<endl;
}
