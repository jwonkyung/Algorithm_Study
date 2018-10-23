/* 6_2  2색 칠하기
2색 칠하기란, 다음 두 조건을 만족하면서 그래프의 정점을 모두 색칠할 수 있는지 묻는 문제이다.

2개의 색이 존재한다.
인접한 두 정점은 색깔이 다르다.

그래프가 주어질 때, 2색 칠하기가 가능한지 출력하는 프로그램을 작성하시오. 
예를 들어, 아래의 그래프는 2색 칠하기가 가능한 그래프이며, 정점을 색칠한 결과는 다음과 같다.

(입력)첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. ( 1 ≤ N ≤ 1000, 1 ≤ M ≤ 100,000 ) 둘째 줄부터 간선의 정보가 주어진다. 
각 줄은 두 개의 숫자 a, b로 이루어져 있으며, 이는 정점 a와 정점 b가 연결되어 있다는 의미이다.  
(출력) 주어진 그래프에 대하여 2색 칠하기를 할 수 있으면 YES, 할 수 없으면 NO를 출력한다.

*/
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
