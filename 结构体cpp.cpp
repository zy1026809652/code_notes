#include<bits/stdc++.h>
using namespace std;
struct Class{
	int grade;
	int class_id;
};
struct Stu{
	Class class_info;
	int age;
	char* name;
};
int main()
{
	Stu stu1;
	Stu stu2;
	Class class_1;
	Class class_2;
	class_1.class_id=1;
	class_2.class_id-2;
	class_1.grade=1;
	class_2.grade=1; 
	stu1.class_info=class_1;
	stu1.name="С��";
	cout<<"ѧ��1�������ǣ�"<<stu1.name<<endl; 
	cout<<"ѧ��1�İ༶��:"<<stu1.class_info.class_id;
	return 0;
 } 
