
#include <iostream>
using namespace std;
int main()
{

    //tringle first methods
    // int n=10,m=10;
    // int num = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         if(j>=i){
    //             cout<<j<<" "; //single space
    //         }
    //         else{
    //             cout<<" "; //single space
    //         }
    //     }
    //     cout << endl;
    // }


    
    int n = 9;
    // upper triangle part tringle
    for (int i = 1; i <= n; i++)
    {
        //space printing
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        //number printing
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // lower part triangle
    for (int i = 1; i <= n; i++)
    {
        //space printing
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        //number printing
        for (int j = 1; j <= n - i; j++)
        {
            cout << n - i << " ";
        }
        cout << endl;
    }
}

