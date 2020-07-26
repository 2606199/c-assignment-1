
#include <iostream>
using namespace std;

int main()
{
	int arr[30];
	int n,i,j,temp;
	cout<<"Enter total number of elements to read: ";
	cin>>n;
	cout<<"Enter elements";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"second maximum number is:"<<arr[n-2]<<"\n";
	cout<<"second  minimum number is:"<<arr[1];
	
	
	return 0;
	
}
