# include<stdio.h>
#include<conio.h>
void quicksort(int a[],int ,int);
int partition(int a[],int low,int high);
void main()
{
	int i,a[10],,low,size,high;
	printf("enter the size\n");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
		scanf("%d",a[i]);
	quicksort(array,0,size-1);
	printf("After sorting array elements are\n");
	for(i=0;i<size;i++)
		printf("%d"\t,a[i]);
}
int partition(int a[],int low,int high)
{
	int i,j,temp,key;
	key=a[low];
	i=low+1;
	j=high;
	while(1)
	{
		while(i<high && key>=a[i])
			i++;
		while(key<a[i])
			j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
		{
			temp=a[low];
			a[low]=a[j];
			a[j]=temp;
			return j;
		}
	}
}
void quichsort(int a[],int low,int high)
{
	int j;
	if(low<high)
	{
		j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
