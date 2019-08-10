#include <iostream>
using namespace std;

int main()
{
	int a[10],n,i,max;
	printf("enter the number of elemnts in array\n");
	scanf("%d",&n);
	printf("enter the array elemnts\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("the maximum element is %d",max);
	return 0;
}
