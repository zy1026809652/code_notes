#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	string s[100];
	int count=0;
//字符串以空格为间断输出 
do	
	{
	 	count++;
		cin>>s[count];
        	cout<<s[count]<<endl;		
	}	
		while(cin.get()!='\n');
		cout<<s[count].length(); 
//字符串原样输出
getline(cin,s);
cout<<s; 
		
}

