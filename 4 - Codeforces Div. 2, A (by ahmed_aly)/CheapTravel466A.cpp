#include <iostream>
#include<set>

using namespace std;

int main() 
{
	int n,m,a,b;
	
	cin>>n>>m>>a>>b;
	
	int no_of_passes=n/m;
	int no_of_spare_tickets=n%m;
	
	int cost_of_spare_tickets=no_of_spare_tickets*a;
	if(b<cost_of_spare_tickets)
	{
		no_of_passes+=1;
		cost_of_spare_tickets=0;
	}
	
	int cost =min(no_of_passes*b+cost_of_spare_tickets, n*a);
	cout<<cost;
	
}