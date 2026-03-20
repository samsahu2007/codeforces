#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i, no_test_cases;
    cin >> no_test_cases;
    for ( i = 0; i < no_test_cases; i++){
        long long a, b;
        cin >> a;
        cin >> b;
        if(abs(b-a)==0)
            cout << 0 << " " <<0 << endl;
        else {
            long long gap = abs(b-a);
            if(a%gap>(gap/2))
                cout << gap << " " << gap-(a%gap) <<endl;
            else
                cout << gap << " " << a%gap << endl;
        }
    }
    
}