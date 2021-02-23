#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
 
int main()
{
	  int a,b,n;
	  cin>>a>>b>>n;
	  int flag=0;
	  int ans_a=a;
	
		for(int j=0;j<10;j++)
		{	int temp=ans_a*10 + j;
		
			if(temp%b==0)
			{	
				ans_a=temp;
				//cout<<temp<<" temp\n";
				flag=1;
				break;
			}
								
		}
		
    string ans=to_string(ans_a);
		
		if(flag==0)
			ans="-1";
		else
		{
		  for(int i=1;i<n;i++)
				ans+='0';
			
		}
		
		
		
		cout<<ans<<endl;
		
}
