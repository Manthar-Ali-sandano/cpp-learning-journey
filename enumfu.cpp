#include<iostream>
using namespace std;
int main()
{
    enum traficlight{red,green,blue}
     traficlight=red;
    switch (traficlight)
    {
        case red: cout<<"stop";
        break;

        case green: cout<<"go";
        break;
        
        case blue: cout<<"wait";
        break;
        
        default: cout<<"no other";
    }

}