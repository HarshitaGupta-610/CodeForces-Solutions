#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int,int> M;
    vector<int> A(4);

    for(int i = 0 ; i < 4 ; i++){
        cin >> A[i];
        M[i+1] = A[i];
    }

    string s;
    cin >> s;

    int sum = 0;

    for(int j = 0 ; j < s.size() ; j++){
        sum += M[s[j] - '0']; 
    }

    cout << sum << endl;
}
