#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    double length=1.0;
    double width=1.0;

    double calPerimeter()
    {
        return 2*(length + width);
    }
    double calArea()
    {
        return length*width;
    }
    double get()
    {
        cin>>length;
        cin>>width;
    }
    int set()
    {
       bool a=length>0.0 && length<20.0?true:false;
       bool b=width>0.0 && width<20.0?true:false;

       if(a==false || b==false)
            {
            cout<<"Enter again:"<<endl;
            get();
            set();
        }


    }


};
int main()
{
    Rectangle R;

    R.get();
    R.set();
    cout<<"Area:"<<R.calArea();
    cout<<"Perimeter:"<<R.calPerimeter();
    return 0;
}