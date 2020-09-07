2																																																																																																																																																																																																																																																																																																																																																																																					#include<iostream>
#include<string.h>
using namespace std;
int testpall(char [],int);
int main(){
char str[100];
int c=0;
cout<<"Enter string"<<endl;
gets(str);
if(testpall(str,c))
	cout<<"yes"<<endl;
else
	cout<<"no"<<endl;
}
int testpall(char str[],int c){
int l,t;
l=strlen(str)-1;
t=strlen(str);
	for(int i=c;i<t/2;i++)
	{
		if(str[i]==str[l-i])
		{
			c++;
			break;
		}
		else
			return false;
	}
	if(c==t/2)
	{
		return true;
	}
	else if(c!=t/2)
	{
		return testpall(str,c);
	}
return 0;
}
