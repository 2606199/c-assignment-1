#include<iostream>
using namespace std;
int main(){
int m,rem,rev=0,n,temp;
cout<<"Enter number";
cin>>n;
temp=n;
while(n!=0)
{

    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(temp==rev)
    cout<<"Number is pallindrome";
else
    cout<<"Number is not pallindrome";
}


