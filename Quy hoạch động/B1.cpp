#include <bits/stdc++.h>
using namespace std;

int main()  {
    //Cho dãy a1, a2, ..., an. Tìm một dãy con tăng có nhiều phần tử nhất của dãy.
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    cout << "Nhap day so: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = 0;
    int count = 0;
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        for(int j = i; i - 1; j++) {
            if (a[j] < a[j + 1]) {
                count++;
            } else {
                break;
            }

        }
        
    }
    cout << "Day con tang co nhieu phan tu nhat: ";
    cout << max << " " << count << " " << start << " " << end << endl;
    return 0;

}