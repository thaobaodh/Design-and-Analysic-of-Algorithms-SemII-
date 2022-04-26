#include <iostream>
#include <math.h>

using namespace  std;

int main()
{
     int i,n, dau;
     float x, s1, s2, s3;
     float mu, gt;
     cout << ("Nhap so thuc x=");
     scanf("%f",&x);
     cout << ("\nNhap so nguyen duong n=");
     scanf("%d",&n);
     s1=s2=s3=1.0;
     dau=-1;
     mu= gt =1.0;
     for (i=1; i<=n; i++)
     {
        mu=mu*x;
        s1=s1+mu;
        s2=s2+dau*mu;
        dau=dau*(-1.0);

        gt=gt*i;
        s3=s3+(1.0)*mu/gt;
    }
    
    cout << ("\nTong S1=%f",s1);
    cout << ("\nTong S2=%f",s2);
    cout << ("\nTong S3=%f",s3);
}