#include <bits/stdc++.h>
using namespace std;
class A
{
public:
A()
{
cout<<"Default construct-I am in class A (Parent class)\n";
}
A(int a)
{
cout<<"\n  Class A parameterized constructor\n";
}
};
class B:public A
{
public:
B()
{
cout<<"Default constructor-now i am in class B\n";
}
B(int a){
cout<<"  Class B parameterized constructor\n";
}
};
class C:public A,public B
{
public:
    C()
    {
    cout<<"Default constructor-this one is class C\n";
    }
    C(int a){
    cout<<"  Default constructor--this one is class C\n";
    }
};
class D:public B
{
    public:
D()
{
cout<<"Class D default constructor\n";
}
D(int a)
{
    cout<<"  Class D parameterized constructor\n";
}
};
int main()
{
D d;
C c(1);
    return 0;
}
