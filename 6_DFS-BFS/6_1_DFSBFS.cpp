//6_1 DFS & BFS �����ϱ� -���� 

#include <stdio.h> 
#include <vector>
#include <queue>
#include <stdlib.h>//system("cls")
#include <algorithm>

#define NODE_MAX 1000
#define EDGE_MAX 100000

using namespace std;
int n,m;//n=node#, v=edge#

vector<int> graph[NODE_MAX];//n���� �迭�� ���� vector ����
bool visited_DFS[NODE_MAX]={0,};//�⺻ false 

void DFS(int s){
	//stop signal���� ����??���� 
	
	visited_DFS[s]=true;//1. s_node�湮 ó��
	printf("%d ",s); 
	
	for(int i=0;i<graph[s].size();i++){//s�� ���� ���� ��ȸ
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
	//Queue ����
	//: q.push(x); q.pop(); q.front(); q.empty(); 
	
	// 1. push Q start node
	q.push(0);
	visited_BFS[0]=true;
	printf("0 ");
		
	//2.Q �Ǿ�pop & �湮X����->���� ��� push
	while(!q.empty()){		
		//current node: pop 
		int node=q.front();
		q.pop();
		
		//current ���� ���: �湮X-->push 
		for(int i=0;i<graph[node].size();i++){
			int temp=graph[node][i];
			if (visited_BFS[temp]==false){
				q.push(temp);
				visited_BFS[temp]=true;	////�̶� üũ�ؾ���!!! 
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
	for(int i=0;i<m;i++){//edge������ŭ 
		int a,b;
		scanf("%d %d",&a,&b);
		//a-b ����
		graph[a].push_back(b);
		graph[b].push_back(a);		
	}	
	
	//vector ��� ���� ������� ���� <---���� ���̽� ����! 
	for(int i=0;i<n;i++){
	 sort(graph[i].begin(), graph[i].end());
	}	
	
	system("cls");
	//DFS
	DFS(0);//node0���� ���� 
	printf("\n");
	//BFS
	BFS();//node1���� ���� 
	
	return 0;
}
