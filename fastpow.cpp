u#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,ans=1;
cin>>a>>b;
while(b)
{
  if(b&1)//�ж�ĩβ�Ƿ�Ϊ0�����Ϊ0����Ͳ���a 
  ans*=a;
  a*=a;
  b>>=1;
}
cout <<ans;
return 0;
}


