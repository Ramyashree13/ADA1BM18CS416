
/*selection sort*/
#include <stdio.h>


int selection(int a[],int k,int n)
{
	int i,j,min,temp;
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
				count++;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("%d",count);
	return a[k-1];
}
int main(int argc, char **argv)
{
		int n,i,k,res,a[10];
		printf("enter the n \n");
		scanf("%d",&n);
		printf("enter the array elements\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("enter the kth element\n");
		scanf("%d",&k);
		res=selection(a,k,n);
		printf("the kth smallest element is %d\n",res);
}



/*BUBBLE SORT*/

#include <stdio.h>
int bubble(int a[],int k,int n)
{
	int i,j,temp,count=0,count1=0;
	for(i=0;i<k;i++)
	{
		for(j=0;j<n-2-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				count1++;
		
			}
		}
		
	}
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	for(i=n-1;;i--)
	{
		if(count<=k)
		{
			printf("%d\n",a[i]);
			count++;
		
		}
		break;
	}
	 
}
int main(int argc, char **argv)
{
		int n,i,k,res,a[10];
		printf("enter the n \n");
		scanf("%d",&n);
		printf("enter the array elements\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("enter the k\n");
		scanf("%d",&k);
		bubble(a,k,n);
}



/* Merge sort */
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
