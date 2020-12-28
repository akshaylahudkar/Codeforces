#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{  vector <int> nums{};
 
	string str1;
	cin>>str1;
	
	for(auto i:str1)
	{
		if(isdigit(i))
		{ //cout<<i<<endl;
		//cout<<int(i-'0')<<endl;
			nums.push_back(int(i-'0'));
		}
	}
	
	sort(nums.begin(),nums.end());
 
	
	cout<<nums[0];
	for(size_t i=1;i<nums.size();i++)
	{
		cout<<"+";
		cout<<nums[i];
	}
		
		
}