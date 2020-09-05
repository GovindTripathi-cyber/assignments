#include <iostream>
#include<cmath>
using namespace std;
inline double sphereVolume(double radius)
{
return ((4.0 / 3.0) * 3.14159 * pow(radius, 3));
}
int main()
{
double rad;
cout << "Please input the radius of the sphere: ";
cin >> rad;
cout << "The volume of the sphere is " << sphereVolume(rad) <<endl;
//system("pause");
return 0;
}
