#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    int m;
    cout << "ENTER ROW VALUE :";
    cin >> n;
    cout << "ENTER COLUMN VALUE :";
    cin >> m;

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "TRANSPOSE";
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int mat2 = mat[j][i];
            cout << mat2 << " ";
        }
        cout << endl;
    }

    return 0;
}