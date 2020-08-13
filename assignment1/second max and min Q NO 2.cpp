#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of array ";
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int max = -111111111, max2 = -111111111, min = sizeof(int), min2 = sizeof(int);
	for(int i = 0; i < n; ++i)
	{
		if(a[i] > max)
		{
		    if(max > max2)
		        max2 = max;
		    max = a[i];
		}
		if(a[i] > max2 && a[i] != max)
		    max2 = a[i];
		if(a[i] < min)
	    {
	        if(min < min2)
	            min2 = min;
	        min = a[i];
	    }
		if(a[i] < min2 && a[i] != min)
		    min2 = a[i];
	}
	cout << "\n" << "Second max number is - "<< max2 << "\n";
	cout << "Second smallest number is - " <<	min2;
	return 0;
}
