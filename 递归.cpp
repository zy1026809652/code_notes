#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//�׳�
int  Factorial(int n)
{
	if(n<=1)
	return 1;
	return n*Factorial(n-1);
 } 
 
int Total_add(int n)
{
	if(n==1)
	return 1;
	return n+Total_add(n-1);
}

int Fibonacci(int n)
{
	if(n<=3)
	return 1;
	return Fibonacci(n-1)+Fibonacci(n-2);
}

//m��A��n��B�������
int dfs1(int m,int  n)
{
	if(m==0||n==0)
	return 1;
	return dfs1(m-1,n)+dfs1(m,n-1);	
} 
//ȫ�������

//��n��ȡm�����Ż�
int dfs2(int n,int m)
{
	if(n<m)
	return 0;
	if(n==0||m==0)
//����������������һ����ȡ����ô�´α����n-1����ȡm�������ȡ���´α��n-1������ȡm-1�� 
	return dfs2(n-1,m)+dfs2(n-1,m-1);
} 

bool cmp(char a,char b){
return a>b;
}

//�ַ�����ת
void rev_str(string s)//string ��char a[]�ǵȼ۵� 
{
//���Ͻ�ȡ�ַ�����ֱ���Ӵ�����Ϊ0
if(s.size()>1)
	rev_str(s.substr(1,s.size())) ;
cout<<s[0];
} 

//����������� 
void rev_num(int n)
{
	if(n==0)
	return; 
	cout<<n%10;
	return rev_num(n/10);
}

//һ��ֻ����1��2��̨�ף���һ������ţ�Ȼ�����ҽ��棬���һ�����ҽš�����һ��Ҫ��ż������
//���ж������߷���
void dfs3(int step,int flag)


{
	if(step==0&&flag%2==0)
		return 1;
	if(step<0)return 0;
//step����ÿ�ο�Ĳ�����flag���Ѿ��ߵò����������flag��ż�� 
	reutrn dfs3(step-1,flag+1)+dfs3(step-2,flag+1);
 } 
int main(){
//	int i;
//	//c++ next_permutation ��һ�����к���
	char a[6]={'C','A','D','G','Z','B'};
//	//next_permutation ����boolֵ
//	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
//	//������������ 
//	sort(a,a+6,cmp);
//	while(i<6)
//	{
//		cout<<a[i++]<<endl;
//	}
//	while(next_permutation(a,a+3) ){
//		cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
//	}

//while(i<6) {
//	if(cmp(a[i],a[i++]))
//	cout<<a[i];

//��������ǵݹ�д�� 
//int n=12345,num;
//while(n>=1){
//	num=n%10;
//	cout<<num;
//	n/=10;
//}


}
	

 




 
