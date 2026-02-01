#include <bits/stdc++.h>
using namespace std;

int main() {

    int r, c;
    cin >> r >> c;

    vector<vector<char>> A(r, vector<char>(c));

    vector<bool> badRow(r, false);
    vector<bool> badCol(c, false);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> A[i][j];

            if(A[i][j] == 'S'){
                badRow[i] = true;
                badCol[j] = true;
            }
        }
    }

    int count = 0;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(!badRow[i] || !badCol[j]){
                count++;
            }
        }
    }

    cout << count;
}
