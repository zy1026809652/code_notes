#include<bits/stdc++.h>
#include <stdio.h>
#define row_a 2
#define row_b 3
#define col_a 3
#define col_b 2
using namespace std;
MultiplyMatrix(int a[2][3],int b[3][2],int c[2][2])
{   
	for(int i=0;i<=row_a-1;i++){
		for(int j=0;j<=col_a-1;j++){
	    	c[i][j]=0;
			for(int k=0;k<=row_a;k++)
			c[i][j]+=a[i][k]*b[k][j];
		}		
	}
}
void PrintMatrix(int a[2][2]){
	for(int i=0;i<row_a;i++){
		for(int j=0;j<col_b;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;	
	}
}
int main(){
	cout<<"请输入矩阵A及其行列数:"<<endl;
	int a[row_a][col_a],b[row_b][col_b],  c[row_a][col_b];
	for(int i=0;i<=row_a-1;i++)
		for(int j=0;j<=col_a-1;j++)
			cin>>a[i][j];
	cout<<"请输入矩阵A及其行列数:"<<endl;
	
	for(int i=0;i<=row_b-1;i++)
		for(int j=0;j<=col_b-1;j++)
			cin>>b[i][j];
			
	 MultiplyMatrix(a,b,c);
	 PrintMatrix(c);
} 
