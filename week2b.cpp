/*BUBBLE SORT*/

#include <iostream>
using namespace std;
int bubble(int a[],int k,int n)
{
	int i,j,temp, count=0;
	for(i=0;i<k;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j+1]<a[j])
			{
				count++;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				
		
			}
		}
				
	}
        cout<<count;
	return a[n-k]; 
}
int main(int argc, char **argv)
{
		int n,i,k,res,a[10],largest;
		cout<<"enter the n"<<endl;
		cin>>n;
		cout<<"enter the array elements"<<endl;
		for(i=0;i<n;i++)
			cin>>a[i];
		cout<<"enter the k"<<endl;
		cin>>k;
		largest=bubble(a,k,n);
		cout<<largest;
		return 0;
}

