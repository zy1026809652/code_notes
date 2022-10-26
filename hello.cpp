//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++)	//输入数组a 
//		cin>>a[i];
//	int j;
//	for(int i=0;i<n;i++) //数组a【i】 
//	{
//		for( j=0;j<=i;j++)	//数组a【0】到数组a【i】 
//		{
//			if(a[j]==a[i]) break;	//若值相等j<i  提前结束  
//		}
//		if(j==i) cout<<a[i]<<" ";//j=i 说明前面没有相同数 输出a【i】 
//	}
//} 
#include <iostream>
using namespace std;

int main() {
//   int a[100],n=0,j;
//   while(cin>>a[n++])
//        if(cin.get()=='\n')break;

    string a="";
    cin>>a;
    int n=a.length();
   int j;
  

 
	for(int i=n-1;i>=0;i--) //数组a【i】 
	{
		for(  j=n-1;j>=i;j--)	//数组a【0】到数组a【i】 
		{
			if(a[j]==a[i]) break;	//若值相等j<i  提前结束  
		}
		if(j==i) cout<<a[j];//j=i 说明前面没有相同数 输出a【i】 
	}
} 


