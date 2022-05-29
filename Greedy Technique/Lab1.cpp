#include <bits/stdc++.h>
using namespace std;

typedef struct {
    float do_dai;
    int dau, cuoi;
}canh;

void in_ds_canh(canh a[], int m, int la_PA) {
    int i;
    float tong = 0.0;
    for (int i = 0; i < m; i++)
    {
        /* code */
        cout << i + 1 << a[i].dau << " " << a[i].cuoi << " " << a[i].do_dai << endl;
        if (la_PA) {
            tong += a[i].do_dai;
        }
        if (la_PA) {
            cout << "Tong do dai cua PA la: " << tong << endl;
        }
    }
    
}

void swap(canh *x, canh *y) {
    canh temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(canh a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j].do_dai > a[j + 1].do_dai) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int dinh_cap_3(canh PA[], int k, canh moi) {
   int i, dem;
   i = 0;
   dem = 1;
   while ( i < k && dem  < 3) {
       if  (moi.dau==PA[i].dau || moi.dau == PA[i].cuoi) 
       dem ++;
       i++;

   }
   return dem == 3;
}

void init_forest (int parent[], int u) {
    while (u != parent[u]){
        u = parent[u];
    }
}

int find_root (int parent[], int u) {
    while (parent[u] != u) {
        u = parent[u];
    }
    return u;
}

int chu_trinh (int r_dau, int r_cuoi) {
    return r_dau == r_cuoi;
}

void update_forest (int parent[], int r1, int r2) {
    parent[r1] = r2;
}

void greedy(canh ds_canh[], int n, canh PA[]){
    int i, j;
    int parent[n];
    init_forest(parent, n);
    int r_dau, r_cuoi;
    j = 0;
    for (i = 0; i < n; i++) {
        r_dau = find_root(parent, ds_canh[i].dau);
        r_cuoi = find_root(parent, ds_canh[i].cuoi);
        if (!chu_trinh(r_dau, r_cuoi)) {
            update_forest(parent, r_dau, r_cuoi);
            PA[j] = ds_canh[i];
            j++;
        }
    }
    for(; j < n* (n-1)/2; i++) {
        r_dau = find_root(parent, ds_canh[i].dau);
        r_cuoi = find_root(parent, ds_canh[i].cuoi);
        if (!chu_trinh(r_dau, r_cuoi)) {
            update_forest(parent, r_dau, r_cuoi);
            PA[j] = ds_canh[i];
            j++;
        }

    }
}
int main() {
    int n, m, i, j;
    cin >> n >> m;
    canh ds_canh[m];
    canh PA[n*(n-1)/2];
    for (i = 0; i < m; i++) {
        cin >> ds_canh[i].dau >> ds_canh[i].cuoi >> ds_canh[i].do_dai;
    }
    bubble_sort(ds_canh, m);
    greedy(ds_canh, m, PA);
    in_ds_canh(PA, n*(n-1)/2, 1);
    return 0;
}

