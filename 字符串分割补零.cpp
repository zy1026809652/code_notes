#include <iostream>
using namespace std;
int main() {
   int res=0;
   string s;
   getline(cin,s);
   if(s=="")
   return 0;
   if(s.length()<7)
   {
       while(s.length()<7)
       s+="0";
       cout<<s;
   }
   else
   {
	while(s.length()%8!=0)
	s+='0';
	 
   for(int i=0;i<s.length();i++)
   {
       cout<<s[i];
       if((i+1)%8==0)
       cout<<endl;
   } 
   }
     
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")
