#include<bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    long long i, no_test_cases;
    cin >> no_test_cases;
    for ( i = 0; i < no_test_cases; i++){
        long long no_jumps=0, start_point=0, steps=0;
        cin >> start_point;
        cin >> no_jumps;
        //cout << "remainder: " << (no_jumps&3) <<endl; 
        //cout << "remainder with 2: " << (no_jumps&1) <<endl;
        if((no_jumps&3)==0)
            cout << start_point << endl;
        else if((no_jumps&3)==1){
            if((start_point&1)) steps=no_jumps;
            else    steps=-no_jumps;
            //cout << ((no_jumps>>2)<<2) <<endl;
            cout << start_point + steps << endl;
        }
        else if((no_jumps&3)==2){
            if((start_point&1)) steps=-1;
            else steps=1;
            cout << start_point + steps << endl;
        }
        else{
            if((start_point)&1) steps=-no_jumps-1;
            else    steps=no_jumps+1;
            cout << start_point + steps << endl;
        }
    }
    return 0;
}