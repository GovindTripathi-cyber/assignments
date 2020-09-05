#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stringReverse(string str,int m)
{
    if(m==-1)
            return 1;
    else{
        cout<<str.at(m);
        m--;
        stringReverse(str,m);
    }
}
int main()
{
    string s;
    int x;
    cout<<"enter string:";
    getline(cin,s);
    cout<<"enter subscript:";
    cin>>x;
    int a=stringReverse(s,x);
}
