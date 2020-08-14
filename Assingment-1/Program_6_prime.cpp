#include<iostream>
using namespace std;
int main()
{
  int i,n,c=0;
  cout<<"Enter number";
  cin>>n;
 for(i=1;i<=n;i++)
  {
    if(n%i==0)
       c=c+1;
  }
  if(c==2)
    cout<<"Number is prime";
  else if(n==1)
    cout<<"Number is neither prime nor composite";
  else
    cout<<"Number is composite";
}
