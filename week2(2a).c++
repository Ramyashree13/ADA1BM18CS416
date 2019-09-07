
/*selection sort*/
#include<iostream>
using namespace std;
int selection(int a[],int k,int n)
{
	int i,j,min,temp;
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
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
		cout<<"enter the n"<<endl;
		cin>>n;
		cout<<"enter the array elements"<<endl;
		for(i=0;i<n;i++)
			std::cin>>a[i];
		cout<<"enter the kth element"<<endl;
		cin>>k;
		res=selection(a,k,n);
		cout<<"the kth smallest element is = "<<res;
}




