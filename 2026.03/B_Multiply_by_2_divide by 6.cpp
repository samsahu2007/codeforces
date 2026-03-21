#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, no_test_cases;
    cin >> no_test_cases;
    for(i=0; i<no_test_cases; ++i){
        long long num;
        cin >> num;
        long long pow_three=0, num_copy=num, pow_two=0;
        while(num_copy%3==0){
            num_copy=num_copy/3;
            ++pow_three;
        }
        for(; num_copy%2==0; num_copy=num_copy/2)
            ++pow_two;
        
        long long op_count=0;

        if(num==1){
            cout<< 0 << endl;
        }

        else if(pow_three!=0 && pow_two<=pow_three && num_copy==1){
            op_count=pow_three-pow_two;
            pow_two=pow_two+op_count;
            cout << op_count+ pow_three <<endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}