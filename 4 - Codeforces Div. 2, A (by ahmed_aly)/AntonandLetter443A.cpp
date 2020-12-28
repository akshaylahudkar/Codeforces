#include <iostream>

#include<set>

using namespace std;

int main() {
	string str;
	getline(cin,str);
	set <char> set1;
	for(char c:str)
	{	
		if((c>='a') && (c<='z'))
		{
			set1.insert(c);
		}
		
	
	} 
	

	
	cout<<set1.size();

}
