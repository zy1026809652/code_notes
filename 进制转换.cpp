#include<bits/stdc++.h>
using namespace std;	
int res=0,a[100],n,m,i;
int main()
{
//ʮ����ת������ 
//	cin>>n;
//while(n)
//{   a[i]=n%2;
//	n/=2; 
//	i++;
//}
//for(int k=i-1;k>=0;k--)
//cout<<a[k]; 
//return 0;

//������תʮ���� 
//int sum=0;
//string s1="";
//cin>>s1;
//int len=s1.length();
//for(int i=0;i<len;i++)
//if(s1[i]=='1')
//sum+=pow(2,len-1-i);
//cout<<sum;
//} 

//������תʮ�����ƣ�δ��ɣ� 
//int x[1000],a=-1,sum;
//int main(){
//string s1="";
//const char*s2[100];
//string subStr="0";
//cin>>s1;
//int len1=s1.length();
//int n=len1%4;
//if(n!=0)
//s1.insert(0,4-n,'0');
//for(int i=0;i<=len1/4;i++)
//const char *s2[i]=s1.substr(n+4*1,4+4*im);
//cout<<s2[2];

//ʮ������תʮ����
//string s="";
//cin>>s;
//for(int i=0;i<s.size();i++)
// {
// 	if(s[i]>='A'&&s[i]<='F')
// 	//ע�ⰴȨ����ǵ��ŵ� 
// 	res+=(s[i]-55)*pow(16,s.size()-i-1);
// 	else if(s[i]<='9'&&s[i]>='0')
//	 {
// 		res+=(s[i]-48)*pow(16,s.size()-i-1);
//	 }
//}
// 
// cout<<res;
//}

//ʮ����תʮ������
//int res;
//int n;
//while(n!=0)
//{
//	n=
//}
// 
// }

//ʮ����ת�˽��ƣ������ʮ����ת�����ƣ�����10���Ƶ�m����ͬ��2=<m<=10�� 

//cin>>n;
//while(n)
//{
//	a[i]=n%8;
//	n/=8;
//	i++;
//}
//for(int k=i-1;k>=0;k--)
//cout<<a[k]; 
//return 0;
//
//} 
  //n����ת10���� 
   int f=0;
   char a[100];
   scanf("%s%d",a,&m);
   for (int i=0;i<strlen(a);i++)
   {
        f*=m;
        if (a[i]=='A'||a[i]=='B'||a[i]=='C'||a[i]=='D'||a[i]=='E'||a[i]=='F')
        {
            f=f+(a[i]-'A'+10);
        }
        else
        {
            f=f+(a[i]-'0');
        }
   }
   cout<<f;
   
}  

