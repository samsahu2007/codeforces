#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int i, no_test_cases;
    cin >> no_test_cases;
    for ( i = 0; i < no_test_cases; i++){
        int n;
        cin >> n;
        
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            freq[x]++;
        }
    
        int maxFreq = 0;
        for(auto& p : freq)
            maxFreq = max(maxFreq, p.second);
    
        if(maxFreq==n)
            cout<< "0" << endl;
        else{
            int result = n-maxFreq + (int) ceil(log2((double)(n)/(double)maxFreq));
            //cout << n << " " << maxFreq << endl;
            //cout << "log:" << ceil(log2((double)(n)/(double)maxFreq));
            cout << result << endl;
        }
    }
}