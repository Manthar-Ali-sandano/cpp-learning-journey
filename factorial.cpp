#include<iostream>
#include <cstdlib> 
using namespace std;
int fact=1;
int factorial(int num)
{
    for (int i=1; i<=num; i++)
     {
        fact=i*fact;
     }
     return fact;
}
int main()
{
    
    int func=factorial(4);
    cout<<func;
}