#include<iostream>
#include<math.h>

using namespace std;

int main(){
    //kỹ thuật tối ưu hóa các vòng lặp
    //Tính giá trị các biểu thức sau 1/1! + 3/2! + 5/3! + … + (2n-1)/n!
    int n;
    cout<<"Nhap n=";
    cin>>n;
    int i,j,k;
    int s=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                s=s+j;
            }
        }
    }
    cout<<"\n"<<s;
    return 0;
    
}