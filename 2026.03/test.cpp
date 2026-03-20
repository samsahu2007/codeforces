#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={11,7,15, 3, 7};
    for (int i = 0; i < 5; i++){
        for (int j = i+1; j < 5; j++){
            cout << (arr[i]&arr[j]) << endl;
        }
        
    }
    
}