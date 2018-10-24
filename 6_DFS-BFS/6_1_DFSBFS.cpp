//6_1 DFS & BFS 구현하기

#include <stdio.h> 
#include <vector>
#include <queue>
#include <stdlib.h>//system("cls")
#include <algorithm>

#define NODE_MAX 1000
#define EDGE_MAX 100000

using namespace std;
int n,m;//n=node#, v=edge#

vector<int> graph[NODE_MAX];//n개의 배열을 가진 vector 생성
bool visited_DFS[NODE_MAX]={0,};//기본 false 

void DFS(int s){
	//stop signal따로 없음??ㅇㅇ 
	
	visited_DFS[s]=true;//1. s_node방문 처리
	printf("%d ",s); 
	
	for(int i=0;i<graph[s].size();i++){//s와 인접 노드들 순회
		int temp=graph[s][i]; 
		if(visited_DFS[temp]==false){
			DFS(temp);
		}
	}
}

void BFS(){
	//initialization
	bool visited_BFS[NODE_MAX]={0,};
	queue<int> q;
	//Queue 사용법
	//: q.push(x); q.pop(); q.front(); q.empty(); 
	
	// 1. push Q start node
	q.push(0);
	visited_BFS[0]=true;
	printf("0 ");
		
	//2.Q 맨앞pop & 방문X노드는->인접 노드 push
	while(!q.empty()){		
		//current node: pop 
		int node=q.front();
		q.pop();
		
		//current 인접 노드: 방문X-->push 
		for(int i=0;i<graph[node].size();i++){
			int temp=graph[node][i];
			if (visited_BFS[temp]==false){
				q.push(temp);
				visited_BFS[temp]=true;	////이때 체크해야함!!! 
				printf("%d ",temp);
			}
		}
	}	
}

int main(){
	
	//input node,edge number
	scanf("%d %d",&n,&m);
	if (n>NODE_MAX||m>EDGE_MAX||n<0||m<0) return 0;
	
	//create graph			
	for(int i=0;i<m;i++){//edge개수만큼 
		int a,b;
		scanf("%d %d",&a,&b);
		//a-b 연결
		graph[a].push_back(b);
		graph[b].push_back(a);		
	}	
	
	//vector 노드 작은 순서대로 정렬 <---에러 케이스 조심! 
	for(int i=0;i<n;i++){
	 sort(graph[i].begin(), graph[i].end());
	}	
	
	system("cls");
	//DFS
	DFS(0);//node0부터 시작 
	printf("\n");
	//BFS
	BFS();//node1부터 시작 
	
	return 0;
}
