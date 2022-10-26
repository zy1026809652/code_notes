#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//阶乘
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

//m个A和n个B求组合数
int dfs1(int m,int  n)
{
	if(m==0||n==0)
	return 1;
	return dfs1(m-1,n)+dfs1(m,n-1);	
} 
//全排列输出

//从n球取m个不放回
int dfs2(int n,int m)
{
	if(n<m)
	return 0;
	if(n==0||m==0)
//分两种情况，如果第一个球不取，那么下次变成了n-1个球取m个，如果取，下次变成n-1个球里取m-1个 
	return dfs2(n-1,m)+dfs2(n-1,m-1);
} 

bool cmp(char a,char b){
return a>b;
}

//字符串反转
void rev_str(string s)//string 与char a[]是等价的 
{
//不断截取字符串，直到子串长度为0
if(s.size()>1)
	rev_str(s.substr(1,s.size())) ;
cout<<s[0];
} 

//整数倒序输出 
void rev_num(int n)
{
	if(n==0)
	return; 
	cout<<n%10;
	return rev_num(n/10);
}

//一步只能迈1或2个台阶，第一步迈左脚，然后左右交替，最后一步迈右脚。（即一共要走偶数步）
//问有多少种走法？
void dfs3(int step,int flag)


{
	if(step==0&&flag%2==0)
		return 1;
	if(step<0)return 0;
//step代表每次跨的步数，flag是已经走得步数，既最后flag是偶数 
	reutrn dfs3(step-1,flag+1)+dfs3(step-2,flag+1);
 } 
int main(){
//	int i;
//	//c++ next_permutation 下一个排列函数
	char a[6]={'C','A','D','G','Z','B'};
//	//next_permutation 返回bool值
//	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
//	//排序升序逆序 
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

//整数逆序非递归写法 
//int n=12345,num;
//while(n>=1){
//	num=n%10;
//	cout<<num;
//	n/=10;
//}


}
	

 




 
