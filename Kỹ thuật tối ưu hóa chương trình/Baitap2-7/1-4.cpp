#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //Cho dãy n số nguyên a[i], i=1..n. Hãy tìm cách dưa k số đầu cuối về cuối dãy. Hãy chạy chương trình khi n=60.000. 
    int n=60000;
    int i,j,k;
    int a[n];
    int s=0;
    int a1=1;
    int a2=1;
    for (i=0;i<=n;i++)
    {
        a[i]=i;
    }
    for (i=0;i<=n;i++)
    {
        a1=a[i];
        for (j=i+1;j<=n;j++)
        {
            a2=a[j];
            if (a1==a2)
            {
                s=s+1;
                break;
            }
        }
    }
    cout<<"\n"<<s;
    return 0;
    
    
}