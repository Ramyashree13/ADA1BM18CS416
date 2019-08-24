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
				min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
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
