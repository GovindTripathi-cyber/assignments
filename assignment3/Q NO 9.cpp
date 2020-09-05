#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the number";
cin>>n;
vector<int>v((n+1),1);

for(int i=2;i*i<n;i++)
{
if(v[i]==1)
{
for(int p=i*2;p<=n;p+=i)
v[p]=0;
}
}
for(int i=2;i<n;i++)
{
if(v[i]==1)
cout<<i<<endl;
}
