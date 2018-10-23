// 4_3_tobin 
// 이진패턴의 모든 조합을 순서대로 출력

#include <stdio.h>
#include <string.h>

#define MAXSIZE 30

//global 변수 
int str[MAXSIZE];
int n,k;

void print_str(){
   for(int i=0;i<n;i++){
      printf("%d",str[i]);
   }
   printf("\n");
}

//dfs
void recursive(int idx,int cnt){
   if(idx==n) return;
   if(cnt==0){
      print_str();
      return;
   }
   //1로 시작 
   str[idx+1]=1;
   recursive(idx+1,cnt-1);
   
   //0으로 시작 
   str[idx+1]=0;
   recursive(idx+1,cnt);
}

int main(){
   
   scanf("%d %d",&n,&k);   
   recursive(-1,k);
   
   return 0;
}
