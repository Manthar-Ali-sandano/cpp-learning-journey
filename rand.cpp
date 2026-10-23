#include<iostream>
#include <cstdlib> 
using namespace std;
int main()
{
    int num= rand()%10+1;
    int sum=0;

  for (int i=0; i<=num; i++)
  {
    if (i%num ==0 )
    {
        sum=sum+1;
    }
    if(sum==2)
    {
        cout<<num<<"is\tprime";
    }
  }

}