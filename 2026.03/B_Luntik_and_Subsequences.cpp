#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, no_testcases;
    cin >> no_testcases;
    for ( i = 0; i < no_testcases; i++){
        long long n;
        cin >> n;
        long long arr[n]={-1};
        for (long long j = 0; j < n; j++)
            cin >> arr[j];
        
        long long count_1=0, count_0=0;
        for (long long j = 0; j < n; j++){
            if(arr[j]==1)   ++count_1;
            else if(arr[j]==0)   ++count_0;
        }

        cout << (long long) (count_1<<count_0)<< endl;
    }
}