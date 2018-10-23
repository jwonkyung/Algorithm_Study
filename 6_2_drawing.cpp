//6_2  색칠하기
#include <vector>
#include <stdio.h>
#include <stdlib.h>//system("cls");
#include <algorithm> 

#define NODE_MAX 1000
#define EDGE_MAX 100000

using namespace std;

int n,m;
vector<int> graph[NODE_MAX];

int main() {
	scanf("%d %d",&n,&m);
	
	//graph input
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		
		//a-b connect
		graph[a].push_back(b);
		graph[b].push_back(a);		 
	}
	
	//sort with 작은 node 
	for(int i=0;i<n;i++) sort(graph[i].begin(),graph[i].end());
	
//	system("cls");
	
	return 0;
}
