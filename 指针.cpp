#include <iostream>
using namespace std;

int a[3][3] = {1,3,9,42,521,62,7,8,9};
int alter_member(int *a)
{
	a[0]=99;
	return 1;
}
int main()
{long long i=3;
    int row = sizeof(a) / sizeof(a[0]);//行数
    int col = sizeof(a[0]) / sizeof(a[0][0]);//列数
//一些指针的操作 
   int b[9]={1,2,3,4,5,6,7,8,9};
   int *n=b;
//   *n=8;
//   *(n+1)=9;
//   int *p=b;
//   for(int i=0;i<=9;i++){
//   	cout<<*p++<<" ";
//   }
  alter_member(b);
  cout<<b[0];
  long long *p=&i;


cout<<*(b+12);
    return 0;
}

