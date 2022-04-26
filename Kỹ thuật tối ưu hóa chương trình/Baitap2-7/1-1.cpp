#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //Tính S = 1 + (1+2)/2! + (1+2+3)/3! + ... + (1+2+3+...+n)/n!
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
        a=a * (j+1);
        s=s+a/pow(2,i);
    }
    cout<<"\n"<<s;
    return 0;
}