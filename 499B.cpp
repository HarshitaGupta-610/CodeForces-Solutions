#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    unordered_map<string,string>mpi;
    string a ,b;
    for(int i = 0 ; i < m ; i++){
        cin >> a >> b;
        mpi[a] = b;
    }
    vector<string>lecture(n);
    for(int i = 0 ; i < n ;i++){
        cin >> lecture[i];
    }
    for(int i = 0 ; i < n ; i++){
        string a = lecture[i];
        string b = mpi[a];
        if(a.size() <= b.size()){
            cout<<a;
        }
        else{
            cout<<b;
        }
        if( i!= n-1){
            cout<<" ";
        }
    }
    
    return 0;
}
