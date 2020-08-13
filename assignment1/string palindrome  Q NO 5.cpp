#include<iostream>
#include<string>
using namespace std;
int main()
{
	int flag = 1;
	string s;
	cin >> s;
	for(int i = 0; i < ((int)s.size()/2); i++)
	{
		if(s[i] != s[(int)s.size()-(i+1)])
		{
			flag = 0;
			break;
		}
	}
	if(flag == 0)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}
