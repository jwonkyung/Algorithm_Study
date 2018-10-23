//4_2_mountain 
// ÂüÁ¶: https://github.com/sungjk/algorithm/blob/master/src/pTp.cpp

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


