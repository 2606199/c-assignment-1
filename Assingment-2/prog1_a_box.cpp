#include<iostream>
using namespace std;
int main(){
 int m,n,i,j,k;
cout<<"Enter the number of rows:"<<"\n";
cin>>m;
cout<<"Enter the number of columns:"<<"\n";
cin>>n;
for(i=0;i<m;i++)
{
  if(i==0||i==(m-1))
   {
     for(j=0;j<n;j++)
      {
        cout<<"*";
      }
     cout<<"\n";   
   }
  else
  {
     for(j=0;j<n;j++)
     {
       cout<<"*";
       for(k=1;k<n-1;k++)
        {
          cout<<" ";
        }
      cout<<"*"<<"\n";
     break;
     }
   }
}
}
