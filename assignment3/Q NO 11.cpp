#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int printArray(int arr[],int start,int stop)
{
    if(start>stop)
        return 1;
    else
    {
        cout<<arr[start];
        start++;
        printArray(arr,start,stop);
    }
}
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
        cin>>a[i];
    int x=printArray(a,1,5);

}
