#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
int puzzles_needed {};
int puzzles_available {};
vector <int> no_of_pieces {};
cin>>puzzles_needed>>puzzles_available;
for(int i=0;i<puzzles_available;i++)
{	
	int temp;
	cin>>temp;
	no_of_pieces.push_back(temp);
	
}

sort(no_of_pieces.begin(),no_of_pieces.end());

int diff=INT16_MAX;

for(size_t i=0;i<=no_of_pieces.size()-puzzles_needed;i++)
{
	for(size_t j=i;j<i+puzzles_needed;j++)
	{
		int temp_diff=no_of_pieces[i+puzzles_needed-1]-no_of_pieces[i];
		if(temp_diff<diff)
			diff=temp_diff;
	}
}

cout<<diff;
	
	
}