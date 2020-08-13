#include<bits/stdc++.h>
#include<cmath>
using namespace std;
class Rectangle
{
public:

    double x1,x2,x3,x4,y1,y2,y3,y4;
    double l1,l2,l3,l4,length,width;

    double calLen()
    {
        l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
        l3=sqrt(pow(x3-x4,2)+pow(y3-y4,2));
        l4=sqrt(pow(x4-x1,2)+pow(y4-y1,2));

        if(l1==l3 && l2==l4)
        {
             length=max(l1,l2);
        width=min(l1,l2);
        return 1;
        }
       else{
        return 2;
       }


    }
    double square()
    {
        if(length==width)
        {
            cout<<"The Rectangle is also a Square"<<endl;
        }
    }

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
        cout<<"Enter 1st coordinate:"<<endl;
        cin>>x1;
        cin>>y1;
        cout<<"Enter 2nd coordinate:"<<endl;
        cin>>x2;
        cin>>y2;
        cout<<"Enter 3rd coordinate:"<<endl;
        cin>>x3;
        cin>>y3;
        cout<<"Enter 4th coordinate:"<<endl;
        cin>>x4;
        cin>>y4;
    }
    int set()
    {
       bool a=x1>0.0 && y1>0.0?true:false;
       bool b=x2>0.0 && y2>0.0?true:false;
       bool c=x3>0.0 && y3>0.0?true:false;
       bool d=x4>0.0 && y3>0.0?true:false;

       if(a==false || b==false || c==false || d==false)
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
     int c=R.calLen();
    if(c==1)
    {
        R.square();
        cout<<"Area:"<<R.calArea()<<endl;
    cout<<"Perimeter:"<<R.calPerimeter()<<endl;
    }
    else if(c==2)
    {
        cout<<"Not a Rectangle";
    }

    return 0;
}