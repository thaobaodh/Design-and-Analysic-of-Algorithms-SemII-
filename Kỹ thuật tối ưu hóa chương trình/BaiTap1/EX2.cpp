#include <iostream>
#include <math.h>
using namespace  std;

int main(){
    //Tìm các cặp số khác nhau M,N sao cho tổng các ước số của M bằng N và ngược laị với M, N >30000
    int M,N;
    int i,j,k;
    int dem=0;
    for(i=30000;i<=100000;i++){
        for(j=30000;j<=100000;j++){
            if(i==j){
                continue;
            }
            if(i%j==0){
                if(i+j==2*i){
                    dem++;
                    cout<<"\n"<<i<<"+"<<j<<"="<<i+j;
                }
            }
        }
    }
    cout<<"\n"<<dem;
    return 0;
    
}