#include<bits/stdc++.h>
//������ȡģ�����ڿ����ݵĻ�����aÿ��ȡģ 
using namespace std;
int main(){
	long long a,b,p,ans=1;
	cin>>a>>b>>p; 
	a%=p;
	while(b)
	{
		if(b&1)
		ans=(ans*a)%p;
		a=(a*a)%p;
		b>>=1;
	}
	cout<<ans;
} 
