/*4_8 goodseq
숫자 1, 2, 3으로만 이루어지는 수열이 있다. 
임의의 길이의 인접한 두 개의 부분 수열이 동일한 것 이 있으면, 그 수열을 나쁜 수열이라고 부른다. 
그렇지 않은 수열은 좋은 수열이다. 다음은 나쁜 수열의 예이다.

33
32121323
123123213

다음은 좋은 수열의 예이다.

2
32
32123
1232123

길이가 N인 좋은 수열들을 N자리의 정수로 보아 그중 가장 작은 수를 나타내는 수열을 구하는 프로그램을 작성하라. 
예를 들면, 1213121과 2123212는 모두 좋은 수열이지만 그 중에서 작은 수를 나타내는 수열 1213121이다.

(입력) 입력은 숫자 N하나로 이루어진다. N은 1 이상 80 이하이다.
(출력)첫 번째 줄에 1, 2, 3으로만 이루어져 있는 길이가 N인 좋은 수열들 중에서 가장 작은 수를 나타내는 수열만 출력한다. 
수열을 이루는 1, 2, 3들 사이에는 빈칸을 두지 않는다.
*/

#include <stdio.h>
#define max_size 80

int k;
int arr[max_size];

bool checkarr(int idx){
   bool check=true;
   //배열 체크
   for(int i=0;i<idx/2-1;i++){
      for(int j=0;j<=i;j++){
         if(arr[idx-2*i+1+j]==arr[idx-i+1+j]) return false;
         else check=true;
      }
   }
   return check;
}

void goodseq(int idx){
   if (idx==k){
      for(int i=0;i<k;i++) printf("%d",arr[i]);
      return;   
   }
   else{
      arr[idx]=1;
      bool isgoodseq=checkarr(idx+1);
      if(isgoodseq==false){
         arr[idx]=2;
         bool isgoodseq=checkarr(idx+1);
         if(isgoodseq==false){
            arr[idx]=3;
            goodseq(idx+1);
         }
         else goodseq(idx+1);
      }
      else goodseq(idx+1);
   }
}

int main(){
   scanf("%d",&k);   
   
   arr[0]=1;
   arr[1]=2;
   goodseq(2);
   
   return 0;
}
