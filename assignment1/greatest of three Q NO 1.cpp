#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "Input Three numbers";
	cin >> x >> y >> z;
	int a;
	if(x > y)
	{
		a = x;
	}
	else
		a = y;
	if(a < z)
		a = z;
	cout << "Largest number is" << a;
	return 0;
}
