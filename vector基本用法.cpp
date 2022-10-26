#include<bits/stdc++.h>
#include<vector>
using namespace std;
 struct rect  
{  
    int id;  
    int length;  
    int width;  ¡¡¡¡
    
}Rect;
int main()
{
//	vector<vector<int > >num;
//	num.push_back({1,2});
//	num.push_back({3,4});
//	for(int i=0;i<num.size();i++)
//	 for(int j=0;j<num.size();j++)
//	cout<<num[i][j];
vector<Rect> vec;  
    Rect rect;  
    rect.id=1;  
    rect.length=2;  
    rect.width=3;  
    vec.push_back(rect);  
    vector<Rect>::iterator it=vec.begin();  
    cout<<(*it).id<<' '<<(*it).length<<' '<<(*it).width<<endl;      
return 0;  
}
