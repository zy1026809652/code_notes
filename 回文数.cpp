#include<bits/stdc++.h>
using namespace std;
int main(){

    char s[100];  // ���������ַ��� 
    int i, j, n;
    printf("�����ַ�����");
    cin.getline(s,100);

    n = strlen(s);
    for (i = 0, j = n - 1;i < j;i++, j--)
        if (s[i] != s[j])
            break;
    if (i >= j)
        printf("�ǻ��Ĵ�\n");
    else
        printf("���ǻ��Ĵ�\n");
	return 0;
     }




