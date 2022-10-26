#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int a[10];
double sum=0;
int main()
{
	for(int i=0;i<=9;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	//不加fixed则表示总位数，加fixed表示小数位数
	//*max_element(a,a+10)表示求数组a最大值 
	cout<<*(max_element(a,a+10))<<","<<*(min_element(a,a+10))
	<<","<<fixed<<setprecision(2)<<sum/10;
} 
