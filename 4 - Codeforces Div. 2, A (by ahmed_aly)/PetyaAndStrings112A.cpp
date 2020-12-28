#include<iostream>
 
using namespace std;
 
void to_lower(string& data)
	{
		for(auto &c:data)
		{
			c=tolower(c);
		}
		
	}
	
int main()
{  
 
	string str1,str2;
	cin>>str1>>str2;
	
	to_lower(str1);
	to_lower(str2);
	
	if(str1.compare(str2)<0)
		cout<<"-1";
	else if(str1.compare(str2)>0)
		cout<<"1";
	else cout<<"0";
 
	
}