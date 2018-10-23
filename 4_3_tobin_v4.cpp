#include <stdio.h> 
#include <string>

#define MAXSIZE 30 // N<=30

int str[MAXSIZE];
int n,k;

//dfs
void getbinary(int m,int p){
	if (m==n) return;
	if(p==0){
		for(int i=0;i<n;i++) printf("%d",str[i]);	
		printf("\n");		
		
		return;
	}
	
	//1로 시작
	str[m+1]=1;
	getbinary(m+1,p-1);
	
	//0으로 시작 
	str[m+1]=0;
	getbinary(m+1,p);	
}

int main(){	
	scanf("%d %d",&n,&k);	
	getbinary(-1,k);
	
	return 0;
}

