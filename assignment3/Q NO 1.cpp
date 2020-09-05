#include<iostream>
using namespace std;
class complex
{
public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;

    }
    void print()
    {
        cout<<real<<"+i"<<img<<endl;

    }
    complex operator+(complex const &obj)
    {
        complex result;
        result.real=real+obj.real;
        result.img=img+obj.img;
        return result;

    }
private:
    int real,img;


};
int main()
{
    complex c1(2,8),c2(25,19);
    complex c3=c1+c2;
    c1.print();
    c2.print();
    c3.print();
}
