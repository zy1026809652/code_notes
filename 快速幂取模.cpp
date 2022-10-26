#include<bits/stdc++.h>
//快速幂取模就是在快速幂的基础上a每次取模 
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
