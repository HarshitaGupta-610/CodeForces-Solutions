#include<bits/stdc++.h>
using namespace std;

int main(){
    int Y , W;
    cin >> Y >> W;

    int maxi = max(Y , W);
    int D = 1 + (6 - maxi);

    int gcd_val = __gcd(D, 6);

    cout << D / gcd_val << "/" << 6 / gcd_val << endl;

    return 0;
}
