#include <iostream>
#include<list>

using namespace std;

int adjacent[10][10],M,visited[10];
void BFS(int v)
{ 
    for(int i = 0; i < M; i++) 
        visited[i] = 0; 
    list<int> queue; 
    visited[v] = 1; 
    queue.push_back(v); 
	while(!queue.empty()) 
    { 
        v = queue.front(); 
        cout << v << " "; 
        queue.pop_front(); 
        for (int i = 1; i <= M; i++) 
        { 
            if (visited[i]==0) 
            { 
                visited[i] = 1; 
                queue.push_back(i); 
            } 
        } 
	}
}
int main()
{
	int j,i,S;
	cout<<"enter the number of nodes\n";
	cin>>M;
	cout<<"enter  the adjacency matrix\n";
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			cin>>adjacent[i][j];
	cout<<"enter the start vertex";
	cin>>S;
	BFS(S);
	cout<<"\n";
	return 0;
}
