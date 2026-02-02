#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n) ;
        vector<int>odd;
        vector<int>even;
        for(int i = 0 ; i < n ; i++){
            cin >>a[i];
            if(a[i] % 2 == 0){
                even.push_back(a[i]);
            }
            else{
                odd.push_back(a[i]);
            }
            }
            if(even.size() == n){
                cout<<"YES"<<endl;
            }
            else{
                if(odd.size() % 2 == 0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
    }
        
        
        return 0;
     
    }
