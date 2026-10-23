#include <iostream>
using namespace std;    
void refrence(int &x, int &y)
{
    x = 5;
    y = 1;
}
int main()
{

    int a=10;
    int b=2;
    cout<< "Before updation a = " << a << ", b = " << b << endl;
    refrence(a, b);
    cout<< "After updation a = " << a << ", b = " << b << endl;
}