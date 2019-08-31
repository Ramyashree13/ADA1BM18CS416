
/* quick sort */

# include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
	int i,j,temp,key;
	key=a[low];
	i=low+1;
	j=high;
	while(1)
	{
		while(a[i]<high && key>=a[i])
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
void quicksort(int a[],int low,int high)
{
	int j;
	if(low<high)
	{
		j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
int  main()
{
	int i,a[10],size;
	cout<<"enter the size of array";
	cin>>size;
	cout<<size;
	cout<<"enter the array elements\n";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,size-1);
	cout<<"after sorting array elements are\n";
	for(i=0;i<size;i++)
		cout<<a[i];
}


