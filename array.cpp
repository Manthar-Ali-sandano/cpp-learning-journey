#include <iostream>
#include <string>
using namespace std;
int main ()
{
    // initilization of array
    int marks[3]={1,2,3};
    marks[0]=10;
    for (int i=0; i<3; i++)
    {
        cout<<marks[i]<<endl;
    }

    // decleration of array
    string namesno[]={"sachin","dhoni"};
   
    for (int i =0 ; i<=1; i++)
    {
        cout<<namesno[i]<<endl;
    }

   

}