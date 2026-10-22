#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int evenMismatch=0, oddMismatch=0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;

            // Even index should have an even element.
            if(i%2==0 && x%2!=0)
                evenMismatch++;

            // Odd index should have an odd element.
            if(i%2==1 && x%2==0)
                oddMismatch++;
        }

        // Each swap fixes one mismatch of each kind.
        if(evenMismatch==oddMismatch)
            cout<<evenMismatch<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
