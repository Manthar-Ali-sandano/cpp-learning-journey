#include <iostream>
using namespace std;
void byvalue(int x, int y)
{
    x = 5;
    y = 1;
}
int main()
{
    int a=10;
    int b=2;
    cout<< "Before updation a = " << a << ", b = " << b << endl;
    byvalue(a, b);
    cout<< "After updation a = " << a << ", b = " << b << endl;
}