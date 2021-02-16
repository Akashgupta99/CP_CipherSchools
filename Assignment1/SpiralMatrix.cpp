#include <bits/stdc++.h>
using namespace std;

void PrintMatrix(vector<vector<int>>& vec)
{
    int r1 = 0, r2 = vec.size() - 1, c1 = 0, c2 = vec[0].size() - 1;

    while (r1 <= r2 && c1 <= c2)
    {
        for (int i = c1; i <= c2; i++)
        {
            cout << vec[r1][i] << " ";
        }
        r1++;

        for (int j = r1; j <= r2; j++)
        {
            cout << vec[j][c2] << " ";
        }
        c2--;

        if (r1 <= r2)
        {
            for (int i = c2; i >= c1; i--)
            {
                cout << vec[r2][i] << " ";
            }
            r2--;
        }

        if (c1 <= c2)
        {
            for (int j = r2; j >= r1; j--)
            {
                cout << vec[j][c1] << " ";
            }
            c1++;
        }
    }
}

int main()
{
    vector<vector<int>> vec = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    PrintMatrix(vec);
    return 0;
}