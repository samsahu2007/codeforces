#include <bits/stdc++.h>
using namespace std;

int bigflag = 0;
void dfs_search(char s[], long long count)
{
    int i;
    int flag = 0;
    char s_mod[101];
    if(bigflag==1)   return;
    for (i = 1; s[i] != '\0'; ++i)
    {
        if (s[i] != s[i - 1])
        {
            cout << " got match" << endl;
            flag = 1;
            int j, k;
            for (j = 0, k = 0; s[j] != '\0'; ++j)
            {
                if (j != i && j != i - 1)
                {
                    s_mod[k] = s[j];
                    ++k;
                }
            }
            s_mod[k] = '\0';
            printf("%s", s_mod);
            dfs_search(s_mod, count + 1);
        }
    }
    if (!flag)
    {
        if (count != 0 && count % 2 == 1)
        {
            cout << "DA" << endl;
            bigflag = 1;
        }
    }
}

int main()
{
    int i, no_test_cases;
    cin >> no_test_cases;
    for (int i = 0; i < no_test_cases; ++i)
    {
        bigflag = 0;
        char s[101];
        scanf("%s", s);
        dfs_search(s, 0);
        if (!bigflag)
            cout << "NET" << endl;
    }
}