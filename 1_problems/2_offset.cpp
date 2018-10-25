/* 1_2 offset
5x5 2차원 배열이 주어질 때 어떤 원소가 상하좌우에 있는 원소보다 작을 때 해당 위치에 * 을 표시하는 프로그램을 작성하시오. 
경계선에 있는 수는 상하좌우 중 존재하는 원소만을 비교한다.

(입력) 5x5 행렬의 정보가 25 개의 수로 주어진다. 각 수는 0 에서 9 사이 수이다.
(출력) *를 포함한 행렬을 출력예의 형식으로 출력한다.

(예제 입력)
3 4 1 4 9
2 9 4 5 8
9 0 8 2 1
7 0 2 8 4
2 7 2 1 4

(예제 출력)
3 4 * 4 9 
* 9 4 5 8 
9 0 8 2 * 
7 0 2 8 4 
* 7 2 * 4 

*/
#include <cstdlib> //system("cls")
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int number[25];    
    bool ok=true;
    int W=5;
    int H=5;    
 
    int** ary=new int*[W+2];
    for (int i=0;i<W+2;++i) ary[i]=new int[H+1];
    
    //initialize with 1000
    for (int h=0;h<H+2;++h){
        for (int w=0;w<W+2;++w){
            ary[h][w]=1000;
        }
    }
    
    for (int h=1;h<=5;++h){
        for (int w=1;w<=5;++w){
            cin>>ary[h][w];
                        
            if (ary[h][w]>10 || ary[h][w]<0) ok=false;
                
        }
    }
    
//    for (int h=0;h<H+2;++h){
//        for (int w=0;w<W+2;++w){
//            cout<<ary[h][w]<<" ";
//        }
//        cout<<endl;
//    }
    
 
    if (ok){
        system("cls");
        for (int h=1;h<=H;++h){
            for (int w=1;w<=W;++w){
            
            int current=ary[h][w];
            int left=ary[h][w-1];
            int right=ary[h][w+1];
            int under=ary[h+1][w];
            int up=ary[h-1][w];
            
            if (current<left & current<right & current<under & current<up){
                cout<<"*"<<" ";
            
            }
            else{
                cout<<ary[h][w]<<" ";
            }
        }
        cout<<endl;
        }
    }
    
    return 0;
}
