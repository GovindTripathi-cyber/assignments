#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, f = 1;
	cin >> n;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			f = 0;
			break;
		}
	}
	if(f != 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}

