#include <bits/stdc++.h>

using namespace std;

//giả sử ta có các hộp có cùng kích thước To và n đối tượng O1, O2, ..., On. Mỗi đối tượng Oi có kích thước ti. Dĩ nhiên ti <= T0 (i = 1...n) và các ti  này có thể bằng nhau. Tìm phương án sắp xếp tất cả n đối tượng này vào trong các hộp sao cho tốn ít số hộp nhất.
//dùng kỹ thuật tham ăn

int main()
{
    int n, T0, i, j, k, min, min_i, min_j, min_k, min_cost;
    cin >> n >> T0;
    int ary[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> ary[i][j];
        }
    }
    int cost[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (ary[i][j] == 0)
            {
                cost[i][j] = 0;
            }
            else
            {
                cost[i][j] = ary[i][j] + ary[j][i];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                if (cost[i][j] + cost[j][k] < cost[i][k])
                {
                    cost[i][k] = cost[i][j] + cost[j][k];
                }
            }
        }
    }
    min_cost = cost[0][1];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (cost[i][j] < min_cost)
            {
                min_cost = cost[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }
    cout << min_cost << endl;
    cout << min_i + 1 << " " << min_j + 1 << endl;
    return 0;
}