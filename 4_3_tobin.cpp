// 4_3_tobin 
// 이진패턴의 모든 조합을 순서대로 출력

// 두 정수 n, k를 입력받아 k개의 1을 가진 n자리 이진 패턴을 출력하는 프로그램을 작성하세요.
// 두 정수 n,k가 입력으로 주어진다. ( 0< n <= 30, 0 <= k < 8 , n>=k )
// 결과를 내림차순으로 출력한다.

// 예제 입력
// 4 2

// 예제 출력
// 1100
// 1010
// 1001
// 0110
// 0101
// 0011

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
