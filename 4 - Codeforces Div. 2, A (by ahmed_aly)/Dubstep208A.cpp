#include <vector>
#include <string>
#include<iostream>
using namespace std;

vector<string> split(string data, string token)
{
    vector<string> output;
    size_t pos = string::npos; // size_t to avoid improbable overflow
    do
    {
        pos = data.find(token);
        output.push_back(data.substr(0, pos));
        if (string::npos != pos)
            data = data.substr(pos + token.size());
    } while (string::npos != pos);
    return output;
}

int main() 
{
	string str;
	cin>>str;
	
	vector <string> ans=split(str,"WUB");
	
	for(auto i:ans)
		cout<<i<<" ";
}