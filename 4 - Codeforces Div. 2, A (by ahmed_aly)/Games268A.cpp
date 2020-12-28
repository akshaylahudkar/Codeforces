#include<iostream>
#include<vector>
using namespace std;

	
int main()
{	
	int teams{};
	cin>>teams;
	int h,g;
	vector <int> home{};
	vector <int> guest{};
	for(int i=0;i<teams;i++)
	{
		cin>>h>>g;
		home.push_back(h);
		guest.push_back(g);
	}
	int count=0;
	for(auto i:home)
		for(auto j:guest)
		{
			if(i==j)
				count++;
				
		}
		
	cout<<count;
}