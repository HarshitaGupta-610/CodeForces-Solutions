#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>army(n-1);
    for(int i = 0 ; i < n-1 ; i++){
        cin >> army[i];
    }
    int a , b ;
    cin >> a >> b;
    int sum = 0;
    
    for(int i = a-1 ; i < b-1; i++){
        sum += army[i];
    }
    cout<<sum<<endl;
    return 0;
}
