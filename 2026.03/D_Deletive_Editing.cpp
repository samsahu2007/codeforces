#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int i, no_test_cases;
    cin >> no_test_cases ;
    char word[31];
    char target[31];
    for ( i = 0; i < no_test_cases; i++){
        scanf("%s", word);
        scanf("%s", target);
        
        //cout << strlen(target) ;
        //cout << strlen(word) << endl;
        int char_count[26]={0};
        for (int j = 0; j < strlen(target); j++)
            ++char_count[target[j]-'A'];

        char reconstruct[strlen(target)+1];
        memset(reconstruct, 0, sizeof(reconstruct));
        reconstruct[strlen(target)]='\0';
        for (int j = strlen(word)-1, k=strlen(target)-1; j >= 0; j--){
            if(char_count[word[j]-'A']>0 && k>=0 ){
                reconstruct[k]=word[j];
                --k;
                --char_count[word[j]-'A'];
            }
        }
        
        //cout << reconstruct << endl;
        if(!strcmp(target, reconstruct))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}