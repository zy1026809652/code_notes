u#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,ans=1;
cin>>a>>b;
while(b)
{
  if(b&1)//判断末尾是否为0，如果为0结果就不乘a 
  ans*=a;
  a*=a;
  b>>=1;
}
cout <<ans;
return 0;
}


