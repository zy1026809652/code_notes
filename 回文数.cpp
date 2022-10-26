#include<bits/stdc++.h>
using namespace std;
int main(){

    char s[100];  // 存放输入的字符串 
    int i, j, n;
    printf("输入字符串：");
    cin.getline(s,100);

    n = strlen(s);
    for (i = 0, j = n - 1;i < j;i++, j--)
        if (s[i] != s[j])
            break;
    if (i >= j)
        printf("是回文串\n");
    else
        printf("不是回文串\n");
	return 0;
     }




