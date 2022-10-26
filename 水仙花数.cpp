#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int main(){
//	153 1^3+5^3+3^3==153
for(int i=1;i<10000;i++)
{

sum =0;
	sum+=pow(i%100%10,3);
	sum+=pow(i%100/10,3);
	sum+=pow(i/100,3);
	if(sum==i)
	cout<<sum<<" ";

}
} 
