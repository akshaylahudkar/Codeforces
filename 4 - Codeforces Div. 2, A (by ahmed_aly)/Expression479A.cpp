#include <iostream>
 
using namespace std;
 
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a==1)
	{
		if(c==1)
			cout<<a+b+c;
		else cout<<(a+b)*c;
			
	}
	
	else if(b==1)
	{
		if(a<c)
			cout<<(a+b)*c;
		else cout<<a*(b+c);
	
	}
 
	else if(c==1)
	{
		cout<<a*(b+c);
		
	}
	
	else cout<<a*b*c;
	
}