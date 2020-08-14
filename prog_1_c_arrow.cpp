#include<iostream>
using namespace std;
int main(){
 int i,j,k,l,a,s,t,m,n;
cout<<"Enter number of rows: ";
 cin>>m; 
t=m-6;
for(i=1;i<=t;i++)
{
  for(j=1;j<=t-i;j++)
   {
     cout<<" ";
   }
  for(k=1;k<=i;k++)
   {
      cout<<"*";
   }
  for(l=1;l<i;l++)
   {
      cout<<"*";
   }
 cout<<"\n";
}
for(s=t+1;s<m;s++)
{
  for(a=0;a<t-1;a++)
   {
     cout<<" ";
   }
 cout<<"*"<<"\n";
}
}
