#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, no_test_cases;
    cin >> no_test_cases;
    for(i=0; i<no_test_cases; ++i){
        int n, k;
        cin >> n >> k;
        long long arr[n*k];
        for(int j=0; j< n*k; ++j){
            cin >> arr[j];
        }
        long long median_position=(long long )ceil((double)n/(double)2);
        long long gap=n-median_position, sum=0;
        for(long long j=0, index=n*k-1-gap; j<k; ++j){
            //cout <<median_position << " "<< arr[index]<< " ";
            sum=sum+ arr[index]       ;
            index=index-gap-1; 
        }
        cout<< sum <<endl;
    }
}