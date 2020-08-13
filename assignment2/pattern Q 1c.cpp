#include <iostream>
using namespace std;
int main()
{
int n, s, x, y;
cout << "Enter number of rows to show star pattern: ";
cin >> n;
for(x = 1; x <= n; x++)
{
for(s = x; s < n; s++)
cout << " ";

for(y = 1; y <= x; y++)
cout << "* ";
cout << "\n";
}


for(int j=0;j<2*n;j++)
{
    for(int k=0;k<n-1;k++)
{
    cout<<" ";
}
    for(int i=0;i<1;i++)
    {
        cout<<"*";
    }
    cout<<endl;

}

return 0;

}