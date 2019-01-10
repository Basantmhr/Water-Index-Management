#include<iostream>
using namespace std;
int main()
{
    int firstvalue,secondvalue;
    int *mypointer;
    mypointer=&firstvalue;
    *mypointer=10;
    mypointer=&secondvalue;
    *mypointer=20;
    cout<<"First Value is: "<<firstvalue;
    cout<<"\nSecond Value is: "<<secondvalue;
    return 0;
}
