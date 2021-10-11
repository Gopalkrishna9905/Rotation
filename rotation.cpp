#include<iostream>
using namespace std;

void rotateByone(int arr[],int n)
{
	int temp=arr[0],i;
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
	 
}

void rotate(int arr[],int d,int n)
{
	for(int i=0;i<d;i++)
	{
		 rotateByone(arr,n);
	}
}
void printArray(int arr[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<< " ";
	}
	
}

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n= sizeof(arr)/sizeof(arr[0]);
	rotate(arr,3,n);
	printArray(arr,n);
	
}
