#include<iostream>
#include<vector>
using namespace std;
 
	
int main()
{
	int rows=5;
	int cols=5;
	vector<vector <int>> matrix{};
	
int k{};
int result {};
	for(int i=0;i<rows;i++)
	{ vector <int> vec{};
		for(int j=0;j<cols;j++)
		{
			cin>>k;
			vec.push_back(k);
			if(k==1)
			{
				result=abs(2-i)+abs(2-j);
			}
				
		}
		matrix.push_back(vec);
	} 
		
		cout<<result;	
}