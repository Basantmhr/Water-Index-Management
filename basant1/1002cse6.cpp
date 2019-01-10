#include<iostream>
using namespace std;

//forward declaration
class B;
class A
{
    int numA;
    public:
    A():numA(12){}
    //friend function declaration
    friend int add(A,B);

};
class B
{
    int numB;
    public:
    B():numB(1){}
    //friend function declaration
    friend int add(A,B);

};
//fnx add() is the friend fnx of classes A and B
//that accesses the member variables numa and numB
int add(A objectA,B objectB)
{
    return (objectA.numA+objectB.numB);

}
int main()
{
    A objectA;
    B objectB;
    cout<<"Sum:"<<add(objectA,objectB);
   return 0;
}
