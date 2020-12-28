#include <iostream>
#include<set>
 
using namespace std;
 
int main() 
{
	size_t noOfLevels{};
	cin>>noOfLevels;
	int x;
	cin>>x;
	set <int> p{};
	for(int i=0;i<x;i++)
	{	int temp;
		cin>>temp;
		p.insert(temp);
	
	}
	
	int y;
	cin>>y;
	
	for(int i=0;i<y;i++)
	{	int temp;
		cin>>temp;
		p.insert(temp);
	}
	if(p.size()==noOfLevels)
		cout<<"I become the guy.";
	else 
		cout<<"Oh, my keyboard!";
 
}