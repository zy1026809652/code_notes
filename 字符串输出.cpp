#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	string s[100];
	int count=0;
//�ַ����Կո�Ϊ������ 
do	
	{
	 	count++;
		cin>>s[count];
        	cout<<s[count]<<endl;		
	}	
		while(cin.get()!='\n');
		cout<<s[count].length(); 
//�ַ���ԭ�����
getline(cin,s);
cout<<s; 
		
}

