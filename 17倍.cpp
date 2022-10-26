
#include<bits/stdc++.h>
using namespace std;		
long long b[2000];
	long long sum,c,d,l;
int main(){

string s;
cin>>s;
l=s.size();
for(int i=0;i<l;i++){
	if(s[i]-'0'==1)
	  sum+=pow(2,l-i-1);
}
sum*=17;
c=sum;
while(c!=0)
{
	b[d]=c%2;
	c>>=1;
	d++;
}
for(c=d-1;c>=0;c--)
cout<<b[c];
return 0;

}
