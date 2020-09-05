#include <iostream>
#include <complex>
using namespace std;


int main()
{

  std::complex<double> mycomplex1(10.0, 2.0);
  std::complex<double> mycomplex2(11.0, 1.0);
  if(real(mycomplex1)==real(mycomplex2)&&imag(mycomplex1)==imag(mycomplex2))
    cout << "It's OK";
  else
    cout << "Not ok";
  return 0;
}
