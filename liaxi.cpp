#include<bits/stdc++.h>
#include<string>
#include<iostream> 
#include <stdlib.h>
using namespace std;
int main(){
	int n;
	double m;
	cin>>n>>m;
	if(n<10)
	cout<<"    "<<n<<endl;
	if(n<100&&n>=10)
	cout<<"   "<<n<<endl;
	if(n<1000&&n>=100)
	cout<<" "<<n<<endl;
	string s = to_string(n);
	string s1="00000";
	while(s.length()<5)
	s.insert(0,"0");
	cout<<s;
	cout<<setprecision(3)<<m<<endl<<setprecision(4)<<m;
} 
