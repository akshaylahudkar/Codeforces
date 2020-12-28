#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>
using namespace std;

	
int main()
{  

	string str1;
	cin>>str1;
	
	string hello="hello";
	int j=0;
	
	for(auto i:str1)
	{
		if(i==hello[j])
		{
			j++;
			//cout<<j<<endl;
		}
			
	}
	
	if(j==hello.size())
			cout<<"YES";
	else cout<<"NO";
	

	
}