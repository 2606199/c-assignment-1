#include<iostream>
#include<string.h>
using namespace std;
int main(){
char str[30];
int i,l;
int c=0;
cout<<"Enter string";
gets(str);
l=strlen(str);
for(i=0;i<l/2;i++)
{
if(str[i]!=str[l-1-i])
{
c=1;
break;
}
}
if(c==0)
cout<<"Pallindrome";
else
cout<<"not pallindrome";
}

