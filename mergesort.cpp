/* mergesort*/

#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
	int i,j,k,c[50];
	k=i=low;
	j=mid+1;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	while(i<=mid)
		c[k++]=a[i++];
	while(j<=high)
		c[k++]=a[j++];
	for(i=low;i<=high;i++)
		a[i]=c[i];
	
}
void mergesort(int a[],int low,int high)
{
	int mid,i;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

int main()
{
	int a[20],size,i;
	cout<<"enter the size of array";
	cin>>size;
	cout<<"enter the array elements\n";
	for(i=0;i<size;i++)
		cin>>a[i];
	mergesort(a,0,size-1);
	cout<<"after sorting array elements are\n";
	for(i=0;i<size;i++)
		cout<<a[i];
}
