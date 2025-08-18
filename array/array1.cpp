#include <iostream>
using namespace std;
int main()
{
  // array declaration
  int mayankdata[5];
  int value;
  for (int i = 0; i < 5; i++)
  {
    cin >> value;
    mayankdata[i] = value;
  }
  cout << "printing data" << endl;

  // access each data from each indexes

  cout << mayankdata[0] << " ";
  cout << mayankdata[1] << " ";
  cout << mayankdata[2] << " ";
  cout << mayankdata[3] << " ";
  cout << mayankdata[4] << " ";
}