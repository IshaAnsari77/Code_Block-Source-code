#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i==j || i+j==11)
            {
                cout << i<<"  ";;
            }

        else
            { 
                cout << "   ";
            }
           

        }
        cout << endl;
       
    }
    
}

