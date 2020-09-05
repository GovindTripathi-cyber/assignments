#include<iostream>
using namespace std;
class complex
{
int real;
int imag;
public:
complex operator*(complex c)
{
double real1,real2;
real1=real;
real2=c.real;
real=(real*c.real)-(imag*c.imag);
/* if (a,b)(c,d) then formula of multiplication
is (ac-bd,ad+bc) */
imag=(real1*c.imag)+(imag*real2);
complex temp;
temp.real=real;
temp.imag=imag;
return temp;
}
void display()
{
cout<<"("<<real<<","<<imag<<")"<<endl;
}
void set()
{
cout<<"Enter real: "<<endl;
cin>>real;
cout<<"Enter imag: "<<endl;
cin>>imag;
}
};
int main()
{
complex c1,c2;
c1.set();
cout<<"Enter 2nd complex no: "<<endl;
c2.set();
c1*c2;
c1.display();

}

