#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int recursiveMinimum(int arr[],int start,int stop)
{
    if(start==stop)
        return arr[start];
    return min(arr[stop],recursiveMinimum(arr,start,stop-1));

}
int main()
{
    int n;
    cout<<"enter array length:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int y,z;
    cout<<"enter start:";
    cin>>y;
    cout<<"enter stop:";
    cin>>z;
    int x=recursiveMinimum(a,y,z);
    cout<<x;
}
