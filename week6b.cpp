#include<iostream>
#include<stack>
#define NODE 6
using namespace std;

int graph[NODE][NODE] = {
   {0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0},
   {0, 0, 0, 1, 0, 0},
   {0, 1, 0, 0, 0, 0},
   {1, 1, 0, 0, 0, 0},
   {1, 0, 1, 0, 0, 0}
};

void topoSort(int u, bool visited[], stack<int>&stk) {
   visited[u] = true;                

   for(int v = 0; v<NODE; v++) {
      if(graph[u][v]) {            
         if(!visited[v])
            topoSort(v, visited, stk);
      }
   }
   stk.push(u);     
}

void performTopologicalSort() {
   stack<int> stk;
   bool vis[NODE];

   for(int i = 0; i<NODE; i++)
      vis[i] = false;     

   for(int i = 0; i<NODE; i++)
      if(!vis[i])     
         topoSort(i, vis, stk);

   while(!stk.empty()) {
      cout << stk.top() << " ";
      stk.pop();
   }
}

int main() {
   cout << "Nodes after topological sorted order: ";
   performTopologicalSort();
}
