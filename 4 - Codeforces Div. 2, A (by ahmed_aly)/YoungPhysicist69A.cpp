#include <iostream>

using namespace std;

int main() {
    int n,x,y,z;
	int x_t=0;
	int y_t=0;
	int z_t=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		x_t+=x;
		y_t+=y;
		z_t+=z;
		
		
	}
	

	if(x_t==0 && y_t==0 && z_t==0)
	{
		cout<<"YES";
	}
	else cout<<"NO";
	
}