#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int count_s(char s[], char c){
    int ab=0, ba=0;
    for (int j = 1; s[j]!='\0'; j++){
        if(s[j]=='b' && s[j-1]=='a')
            ++ab;
        if(s[j]=='a' && s[j-1]=='b')
                ++ba;
    }

    if(c=='a')
        return ab;
    else
        return ba;
}

int main(){
    int i, no_test_cases;
    cin >> no_test_cases;
    for ( i = 0; i < no_test_cases; i++){
        char s[101] ;
        scanf("%s", s);
        int ab=0, ba=0;
        for (int j = 1; s[j]!='\0'; j++){
            if(s[j]=='b' && s[j-1]=='a'){
                ++ab;
            }
            if(s[j]=='a' && s[j-1]=='b'){
                ++ba;
            }
        }

        if(ab==ba || strlen(s)==1)
            printf("%s\n", s);
        else{
            //possibility 1 ---> change first letter
            char s_1[101], s_2[101], s_final[101];
            strcpy(s_1, s);
            strcpy(s_2, s);
            strcpy(s_final, s);
            int front=0, rear=strlen(s)-1;
            while(front<strlen(s) && rear >=0){
                strcpy(s_1, s_final);
                strcpy(s_2, s_final);
                if(front!=0)    s_1[front]=(s_1[front-1]=='a')?'a':'b';
                else    s_1[front]=(s_1[front]=='a')?'b':'a';
                ++front;

                if(rear!=strlen(s)-1)   s_2[rear]=(s_2[rear+1]=='a')?'a':'b';
                else    s_2[rear]=(s_2[rear]=='a')?'b':'a';
                --rear;

                if(abs(count_s(s_1, 'a')-count_s(s_1, 'b'))==0 ){
                    printf("%s\n", s_1);
                    break;
                }
                
                if(abs(count_s(s_2, 'a')-count_s(s_2, 'b'))==0){
                    printf("%s\n", s_2);
                    break;
                }

                int result1=abs(count_s(s_1, 'a')-count_s(s_1, 'b'));
                int result2=abs(count_s(s_2, 'a')-count_s(s_2, 'b'));
                cout << result1 << endl;
                if(result1>result2)
                    strcpy(s_final, s_2);
                else
                    strcpy(s_final, s_1);
            }
        }
    }
    return 0;
}