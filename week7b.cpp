/* KNAPSACK PROBLEM */
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}

int knapsack(int n,int m,int w[],int p[])
{
	int i,j;
	int knapsack[n+1][m+1];
	for(i=0;i<=n;i++)
		knapsack[i][0]=0;
	for(j=0;j<=n;j++)
		knapsack[0][j]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(w[i-1]<=j)
			{
				knapsack[i][j]=max(knapsack[i-1][j],p[i-1]+knapsack[i-1][j-w[i-1]]);
			}
			else
			{
				knapsack[i][j]=knapsack[i-1][j];
			}
		}
	}
	return knapsack[n][m];
}
int main()
{
	int i,m,n,result;
	cout<<"enter the number of weights";
	cin>>n;
	int w[n],p[n];
	cout<<"enter the weights and prices of knapsack";
	for(i=0;i<n;i++)
	{
		cin>>w[i]>>p[i];
	}
	cout<<"enter the capacity of knapsack";
	cin>>m;
	result=knapsack(n,m,w,p);
	cout<<"enter the maximum value of items that can be filled is: "<<result;
	return 0;
}
