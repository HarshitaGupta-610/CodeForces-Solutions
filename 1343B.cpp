#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        // Each half has n/2 elements.
        // A solution exists only when n/2 is even (n is divisible by 4).
        if((n/2)%2 != 0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";

            // Print n/2 even numbers: 2, 4, 6, ..., n.
            // These form the first half of the array.
            for(int i=1; i<=n/2; i++){
                cout<<i*2<<" ";
            }

            // Print n/2 - 1 odd numbers: 1, 3, 5, ...
            // We leave one position for the final balancing odd number.
            for(int i=1; i<n/2; i++){
                cout<<(i*2)-1<<" ";
            }

            // Print the last odd number to make both half-sums equal.
            // This value is n + (n/2 - 1).
            cout<<n+(n/2-1)<<"\n";
        }
    }

    return 0;
}
