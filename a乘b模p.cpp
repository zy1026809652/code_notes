#include<bits/stdc++.h>

using namespace std;
int main(){
	long long a,b,p,ans=0;
	cin>>a>>b; 

while(b){

if(b&1)
ans=ans+a;
a=a*2;
b>>=1;
}
	cout<<ans;
} 
