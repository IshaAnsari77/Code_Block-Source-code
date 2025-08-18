#include <iostream>
using namespace std;
float areaofcircle(int r)
{
    float ans = 3.14 * r * r;

    return ans;
}
int main()
{
    float k = areaofcircle(3);
    cout << k;

    return 0;
}