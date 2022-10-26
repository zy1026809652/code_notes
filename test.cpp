#include <bits/stdc++.h>
using namespace std;
int n;
int res,num;
int main()
{   
//   for(int i=0;i<10;i++)
//   {
//   	cin>>n[i];
//   	if(n[i]==0)
//   	break;
//   }
//   for(int i=0;i<2;i++)
//   {
//   		res=n[i];
//   		while(res>=3)
//   		{
//   			res=res/3+res%3;
//   			num+=res;
//   		
//   			if(res==2){
//			   num++;
//			   break;
//		}
//   		     
//		}  cout<<num<<endl;	
//		   }

//cin>>n;
//int a[n];
//int flag[n];
//for(int i=0;i<n;i++)
//{
//	cin>>a[n];
//	flag[i]=1;
//}
//for(int i=0;i<n-1;i++)
//	for(int j=i+1;j<n;j++)
//	{
//		if(a[j]==a[i])
//		flag[j]=0;
//	}
//for(int i=0;i<n;i++){
//	if(flag[i])
//	cout<<a[i];
//}
int flag[10]; 
int a[8]={1,2,2,1,0,0,0,9};
sort(a,a+8);
//int n=unique(a,a+8)-a;//unique返回该数组最后一个不重复元素的地址 
////for(int i=0;i<n;i++)
//cout<<&a[1]<<" "<<unique(a,a+1)<<" "<<a;

for(int i=0 ,j=i+1;i<7,j<8;i++,j++)
{
	if(a[i]==a[j])
	{
		if(flag[j]==1)
		break;
		flag[j]==1;
	}
	
	
}


}
   

