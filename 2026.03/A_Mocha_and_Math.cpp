#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, no_test_cases;
    cin >> no_test_cases;
    for ( k = 0; k < no_test_cases; k++){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        if(n==1){
            cout << arr[0] << endl;
            continue;
        }
        int current, min=(arr[0]&arr[1]);
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                current= (arr[i]&arr[j]);
                if(current<min) min=current;
            }
        }

        cout << min << endl;
    }
}