//4_2_mountain 
// 참조: https://github.com/sungjk/algorithm/blob/master/src/pTp.cpp


// 봉우리가 여러개인 산 모양을 출력한다. 산 모양은 그림과 같고 좌우 대칭이다.
// 첫 번째 줄에 숫자를 입력 받는다. 숫자의 크기는 20보다 작은 자연수이다.
// 출력 예의 형식으로 출력한다.

// 입력
// 3

//출력
// 1213121


#include <iostream>
#include <stdio.h> 
using namespace std;

void process(int n){
	if(n==1){
		cout<<1;
		return;
	}
	else{
		process(n-1);
		cout<<n;
		process(n-1);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	
	process(n);
	
	
	return 0;
}


