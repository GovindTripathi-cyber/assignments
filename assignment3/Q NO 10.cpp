#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool testPalindrome(string str,int low ,int high)
{
    if(low>=high)
        return true;
    else
        if(str.at(low)!=str.at(high))
        return false;
    return testPalindrome(str,low+1,high-1);
}
int main()
{
    string s;
    cout<<"enter string:";
    getline(cin,s);
    int len=s.length();
    bool a=testPalindrome(s,0,len-1);
    if(a==true)
        cout<<"palindrome";
    else
        cout<<"not palindrome";
}
