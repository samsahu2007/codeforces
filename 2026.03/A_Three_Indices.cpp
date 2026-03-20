#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i, no_test_cases;
    cin >> no_test_cases;
    for(i=0; i<no_test_cases; ++i){
        long long n;
        cin >> n;
        long long arr[n];
        for(int j=0; j<n; ++j)
            cin >> arr[j];

        long long stack[3];
        int flag=0;
        for(int j=0; j<n-2; ++j){
            int count =0;
            stack[0]=j+1;
            count=1;
            for(int k=j+1; k<n; ++k){
                if(count==1 && arr[k]>arr[stack[0]-1]){
                    stack[count++]=k+1;
                }
                else if(count==2 && arr[k]<arr[stack[1]-1]){
                    stack[count++]=k+1;
                }
            }
            if(count==3){
                cout << "YES" << endl;
                for(int k=0; k<3; ++k){
                    cout << stack[k] << " ";
                }
                cout << " "<< endl;
                flag=1;
                break;
            }
        }

        if(!flag){
            cout << "NO" << endl;
        }
    }
}