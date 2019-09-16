#include<bits/stdc++.h>
using namespace std;
#define UNASSIGNED 0
#define N 9
#define SQN 2

bool Findunassignedlocation(int grid[N][N],int &row,int &col);
bool isSafe(int grd[N][N],int row,int col,int num);
bool UsedinRow(int grid[N][N],int row,int num);
bool Usedincol(int grid[N][N],int col,int num);
bool Usedinbox(int grid[N][N],int boxstartrow,int boxstartcol,int num);

bool SolveSudoku(int grid[N][N])
{
	int row,col;
	if(!Findunassignedlocation(grid,row,col))
		return true;
	for(int num=1;num<=N;num++)
	{
	 if(isSafe(grid,row,col,num))
	 {
		grid[row][col]=num;
		if(SolveSudoku(grid))
		 return true;
		grid[row][col]=UNASSIGNED;
	 }
	}
	return false;
}
bool Findunassignedlocation(int grid[N][N],int &row,int &col)
{
	for(row=0;row<N;row++)
	{	 
		for(col=0;col<N;col++)
	  	{	
			if(grid[row][col]==UNASSIGNED)
				return true;
		}
	}
	return false;
}

bool isSafe(int grid[N][N],int row,int col,int num)
{
	return !UsedinRow(grid,row,num) && !Usedincol(grid,col,num) && !Usedinbox(grid,row-row%SQN,col-col%SQN,num) && grid[row][col]==UNASSIGNED;
}

bool UsedinRow(int grid[N][N],int row,int num)
{
	for(int col=0;col<N;col++)
		{
			if(grid[row][col]==num)
				return true;
		}
	return false;
}

bool Usedincol(int grid[N][N],int col,int num)
{
	for(int row=0;row<N;row++)
		{
			if(grid[row][col]==num)
				return true;
		}
	return false;
}

bool Usedinbox(int grid[N][N],int boxstartrow,int boxstartcol,int num)
{
	for(int row=0;row<SQN;row++)
	{
		for(int col;col<SQN;col++)
		{
			if(grid[row+boxstartrow][col+boxstartcol]==num)
			return false;
		}
	}
	return false;
}
void printGrid(int grid[N][N])
{
	for(int row=0;row<N;row++)
	{
		for(int col=0;col<N;col++)
		cout<<grid[row][col]<<" ";
	cout<<endl;
	}
}

int main()
{
	int grid[N][N];
	cout<<"enter sudoku puzzle";
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			cin>>grid[i][j];
	if(SolveSudoku(grid)==true)
		printGrid(grid);
	else
		cout<<"no solution";
	return 0;
}
