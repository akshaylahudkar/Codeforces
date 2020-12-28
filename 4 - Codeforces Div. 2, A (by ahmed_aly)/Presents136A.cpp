#include<iostream>

#include<map>

using namespace std;

	
int main()
{  

	int tc;
	cin>>tc;
	map <int,int> gifts{};
	
	for(int i=1;i<=tc;i++)
	{int k;
		cin>>k;
		gifts[k]=i;
		
	}
	
for(int i=1;i<=tc;i++)
{
	cout<<gifts[i]<<" ";
	
}
	
}