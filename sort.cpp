#include<iostream>
using namespace std;
int main(){
 int a[30];
 int i,j,t,n,minpos;
 cout<<"Enter limit of your array";
 cin>>n;
 cout<<"Enter elements of array";
for(i=0;i<n;i++)
{
cin>>a[i];
}

 for(i=0;i<=n-2;i++)
{
 minpos=i;
for(j=i;j<n;j++)
{
if(a[j]<a[minpos])
{
minpos=j;
}
}
t=a[i];
a[i]=a[minpos];
a[minpos]=t;
}
cout<<"Sorted array is:";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
}
