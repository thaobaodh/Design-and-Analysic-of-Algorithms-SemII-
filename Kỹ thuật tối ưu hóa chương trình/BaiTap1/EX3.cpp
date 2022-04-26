#include <iostream>
#include <math.h>
using namespace  std;

int main(){
    //kỹ thuật tối ưu hóa rẽ nhánh
    //Cho hai dãy số nguyên A,B lần lượt có số phần tử là n,m. Xét xem A,B có bằng nhau hay không ?
    int a, b;
    int n, m;
    cout << ("Nhap so thuc a=");
    cin >> a;
    cout << ("\nNhap so thuc b=");
    cin >> b;
    cout << ("\nNhap so nguyen duong n=");
    cin >> n;
    cout << ("\nNhap so nguyen duong m=");
    cin >> m;
    if (n == m)
    {
        cout << ("\nA,B bằng nhau");
    }
    else
    {
        cout << ("\nA,B khong bằng nhau");
    }
    return 0;
    
}