//Dangaling pointer is a pointer to the storage taht is no longer allocated ,program that create dangaling pointer often appear to work on small inputs but are likely to fail on large or complex input
#include<iostream>
using namespace std;
int main()
{
    int i;
    char c;
    void *data;
    i=6;
    c='a';
    data =&i;
    cout<<"The data points to the integer value"<<*(int*) data;
    data=&c;
    cout<<"The data now points to the character "<<*(char*)data;
}
