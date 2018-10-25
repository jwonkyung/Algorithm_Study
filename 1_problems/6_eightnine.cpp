/* 1_6 영팔이

영팔이는 숫자 0과 8을 굉장히 좋아하는 아이이다. 그 이유는 숫자가 좌우로 뒤집어져도 똑같이 생겼기 때문이라고 한다. 
영팔이는 숫작 0과 8의 매력을 사람들에게 전파하기 위해 유리로된 N×M타일에 0과 8들을 잔뜩 써놓았다. 
이제 영팔이는 0과 8로된 숫자들은 좌우로 뒤집어도 여전히 0과 8들이라는 것을 보여주려고 한다.

(입력) a첫째줄에는 자연수 N, M이 주어진다. N은 타일행렬의 행의 개수, M은 타일행렬의 열의 수를 나타낸다. 
N과 M은 100 이하의 자연수이다. 둘째줄부터 N개의 줄에 걸쳐, 타일행렬의 정보를 나타내는 0과 8들이 주어진다.
(출력) 주어진 타일행렬을 좌우로 뒤집어 출력한다.

(예제 입력)
3 3
0 8 0
8 8 0
0 0 8

(예제 출력)
0 8 0 
0 8 8 
8 0 0
*/
#include <cstdlib> //system("cls")
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
 
    int N;
    int M;
 
    cin>>N>>M;
    
    int confirm_num=0;
    
    int** ary=new int*[N];
    for (int i=0;i<N;++i) ary[i]=new int[M];
    
    int** flipary=new int*[N];
    for (int i=0;i<N;++i) flipary[i]=new int[M];
    
    
    for (int n=0;n<N;++n){
        for(int m=0;m<M;++m){
            cin>>ary[n][m];
            if (ary[n][m]==0 || ary[n][m]==8){
                confirm_num+=1;
            }
        }
    }
    
//    //confirm
//    for (int n=0;n<N;++n){
//        for(int m=0;m<M;++m){
//            cout<<ary[n][m];
//        }
//    }
 
    system("cls");
    if (confirm_num==N*M & N<=100 & M<=100 & N>0 & M>0){
    //flip array
    for (int n=0;n<N;++n){
        for(int m=0;m<M;++m){
            flipary[n][m]=ary[n][M-m-1];
            cout<<flipary[n][m]<<" ";
        }
        cout<<endl;
    }
    }
    
    
    return 0;
}
