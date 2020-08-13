#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, f = 1, m, c = 0;
	cin >> n;
	m = n;
	while(n > 0)
	{
		n = n/10;
		c++;
	}
	n = m;
	int d = pow(10, c-1);
	for(int i = 0; i < c/2; i++)
	{
		int x = m%10;
		int y = (n/d) % 10;
		if(x != y)
		{
			f = 0;
			break;
		}
		m = m/10;
		d = d/10;
	}
	if(f == 0)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}
