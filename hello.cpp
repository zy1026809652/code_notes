//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++)	//��������a 
//		cin>>a[i];
//	int j;
//	for(int i=0;i<n;i++) //����a��i�� 
//	{
//		for( j=0;j<=i;j++)	//����a��0��������a��i�� 
//		{
//			if(a[j]==a[i]) break;	//��ֵ���j<i  ��ǰ����  
//		}
//		if(j==i) cout<<a[i]<<" ";//j=i ˵��ǰ��û����ͬ�� ���a��i�� 
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
  

 
	for(int i=n-1;i>=0;i--) //����a��i�� 
	{
		for(  j=n-1;j>=i;j--)	//����a��0��������a��i�� 
		{
			if(a[j]==a[i]) break;	//��ֵ���j<i  ��ǰ����  
		}
		if(j==i) cout<<a[j];//j=i ˵��ǰ��û����ͬ�� ���a��i�� 
	}
} 


