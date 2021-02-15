#include <bits/stdc++.h>
using namespace std;

//tested for n = (1, 15, 16, 17, 20, 28, 29) and passed all
//failed for n = 0

bool FindinMatrix(const vector<vector<int>> &vec, const int &n)
{
    int row = 0, col = vec[0].size() - 1;
    // cout << col << endl;
    // cout<<vec[row][col]<<endl;
    while ((row < vec.size() && col < vec[0].size()) && col >= 0)
    {
        // cout << col << endl;
        // cout << vec[row][col] << endl;
        if (vec[row][col] == n)
        {
            return true;
        }
        else
        {
            if (vec[row][col] > n && (row < vec.size() - 1 && col >= 0))
            {
                if (col > 0)
                {
                    col--;
                    // cout << "col: " << col << endl;
                }
                else
                {
                    row++;
                    // cout << "row: " << row << endl;
                }

                // cout << col << endl; // move column 1 step back if value at vec[s,e] is greater than input
            }
            else
            {
                if (row < vec.size() - 1)
                {
                    row++;
                }
                else
                {
                    col++; // move column 1 step forward if s is at the end row and no way to move for s pointer
                    if (vec[row][col] > n)
                    {
                        return false; //check if the next value is bigger than input thus return false as the value is not present
                    }
                }
            }
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> vec = {{1, 2, 3, 4, 5}, {10, 12, 17, 19, 23}, {8, 14, 16, 20, 28}};

    int n = 30;
    bool result = FindinMatrix(vec, n);
    cout << result << endl;
    return 0;
}