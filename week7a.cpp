
/* LONGEST SUBSEQUENCE */
#include<iostream>
#include<bits/stdc++.h>
#define MAX 25
using namespace std;

int l[MAX][MAX];
int max(int a,int b)
{
	return (a>b)?a:b;
}

int lcs(char x[],char y[],int m,int n)
{
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0)
				l[i][j]=0;
			else if(x[i-1]==y[j-1])
				l[i][j]=l[i-1][j-1]+1;
			else
			{
				l[i][j]=max(l[i-1][j],l[i][j-1]);
}
		}
	}
	return l[m][n];
}

void print(char x[],char y[],int m,int n,int index)
{
	char lcs1[index+1];
	int i=m,j=n;
	lcs1[index] ='\0';
	while(i>0 && j>0)
	{
		if(x[i-1]==y[j-1])
		{
			lcs1[index-1]=x[i-1];
			i--;
			j--;
			index--;
		}
		else if(l[i-1][j]>l[i][j-1])
			i--;
		else
			j--;
	}
	cout<<"The longest subsequence string is :"<<lcs1;
}
void input(char x[],char y[])
{
	int i;
	cout<<"enter the string1\n";
	cin>>x;
	cout<<"enter the string2\n";
	cin>>y;
}
int main()
{
	int index,m,n;
	char x[MAX]="";
	char y[MAX]="";

	input(x,y);

	n=strlen(x);
	m=strlen(y);

	index=lcs(x,y,m,n);
	print(x,y,m,n,index);
	return 0;
}			
