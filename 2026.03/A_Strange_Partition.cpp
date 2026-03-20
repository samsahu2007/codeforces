#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i, no_test_cases;
    cin >>no_test_cases;
    for (i = 0; i < no_test_cases; i++){
        long long n, x;
        cin >> n;
        cin >>  x;
        long double arr[n], sum=0, sum_ceil=0;
        for (long long j = 0; j < n; j++)
            cin >> arr[j];
        
        for (long long j = 0; j < n; j++){
            sum=sum+arr[j];
            //cout << ceil(arr[j]/x)<<" ";
            sum_ceil=sum_ceil+ceil(arr[j]/x);
        }

        cout << (long long)ceil(sum/x) << " "<< (long long)sum_ceil << endl;
        
    }
    return 0;
}