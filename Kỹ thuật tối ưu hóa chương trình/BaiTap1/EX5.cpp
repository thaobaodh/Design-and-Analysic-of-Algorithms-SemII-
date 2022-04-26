#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //tối ư hóa các vòng lặp
    //tính giá trị biểu thức: 1 + 2/3 + 2/3*4/5 + 2/3*4/5*6/7 + 2/3*4/5*6/7*8/9*2(n+1)/(2n+3)
    int n;
    cout<<"Nhap n=";
    cin>>n;
    int i,j,k;
    int s=1;
    int a=1;
    for (i=0;i<=n;i++)
    {
        a=1;
        for (j=0;j<= i; j++)
        a=a * 2*(j+1)/(2*j+3);
        s=s+a;

    }
    cout<<"\n"<<s;
    return 0;
}
