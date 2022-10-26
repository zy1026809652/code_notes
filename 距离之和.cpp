  #include<bits/stdc++.h>
using namespace std;
long long a[100010],n,ans;
int main()
{ 
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<32;i++)
	{
        int s=0;
		for(int j=0;j<n;j++)
		  if(a[j]>>i&1)
		   s++;
		ans+=s*(n-s);//
	}//110 101 011  100  010 001
	cout<<ans;
	return 0;
	
}
