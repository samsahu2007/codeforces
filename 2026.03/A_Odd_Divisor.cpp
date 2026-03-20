#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i, no_test_cases;
    cin >> no_test_cases;
    for ( i = 0; i < no_test_cases; i++){
        long long a;
        cin >> a;
        double power=log2(a);
        //cout << (int)power << " " << power <<endl;
        if((int)power==power)
            cout << "NO" <<endl;
        else
            cout << "YES" << endl;
    }
    
}