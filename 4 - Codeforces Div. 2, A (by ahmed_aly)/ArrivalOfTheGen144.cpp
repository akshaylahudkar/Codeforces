#include<iostream>
#include<vector>
using namespace std;

	
int main()
{
	int len{};
	cin>>len;
	vector <int> vec;

	for(int i=0;i<len;i++)
	{	int temp;
		cin>>temp;
		vec.push_back(temp);
	}
	
	int min=101,max=0,cross=0,index_min,index_max;
	int target_min=len-1;
	int target_max=0;
	int ans {};
	
	for(size_t j=0;j<vec.size();j++)
	{
		if(vec[j]>max)
		{
			max=vec[j];
			index_max=j;
			
		}
		
		if(vec[j]<=min)
		{
			min=vec[j];
			index_min=j;
			
		}
		
				
	}
	
	if(min==max)
		ans=0;
	else
	{
			
		if(index_max<index_min)
			cross=0;
		else if(index_max>index_min)
			cross=1;
		
		
		
		
		ans=abs(index_max-target_max)+(target_min-index_min)-cross;
	
	}
	
	cout<<ans;
	
}