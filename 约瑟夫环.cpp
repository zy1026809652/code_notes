#include<iostream>
#include<cstdio>
#define N 110
int a[N];
int JosephRing(int m, int n)
{
	if(n==1)
	return 0;
	return 	(JosephRing(n-1,m)+m)%10;
}
int main()
{
int i,n,m,f=0,t=0,s=0;
std::cin>>n>>m;
while(f!=n)
{	
    t++;
if(t==n+1)
    t=1;
if(a[t]==0)
    s++;
if(s==m)
{
	s=0;
	std::cout<<t<<" ";
	a[t]=1;
	f++;
}

}
	return 0;
}
