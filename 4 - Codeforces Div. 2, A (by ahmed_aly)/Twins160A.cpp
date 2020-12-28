#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{  vector <int> nums{};
	int coins {};
	cin>>coins;
	for(int i=0;i<coins;i++)
	{	int k;
		cin>>k;
		nums.push_back(k);
		
	}
	
	sort(nums.rbegin(),nums.rend());
	int sum=0;
	for(auto i: nums)
	{
		sum+=i;
	}
	
	sum=sum/2;
	int steal {};
	int count {};
	for(int i=0;i<nums.size();i++)
	{
		
		
		steal+=nums[i];
		count++;
			
		if(steal>sum)
		{
			cout<<count;
			break;
		}
			//cout<<"Count"<<" "<<count<<"\n";
			
		
		
		
	}
}