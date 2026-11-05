#include<iostream>
#include<vector>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     
     int c1 = 0, c2 = 0;
     for(int i = 0; i < n ; i++){
        int x;
        cin>>x;
        if( x == 1){
            c1++;
        }
        else{
            c2++;
        }
     }

     int sum = (1 * c1) + (2 * c2) ;

     if( sum % 2 != 0){
        cout<<"NO"<<endl;
     }
     else if( c1 == 0 && c2 % 2 == 1){
        cout<<"NO"<<endl;
     }
     else{
        cout<<"YES"<<endl;
     }
    }

    return 0;
}
