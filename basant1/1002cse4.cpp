#include<iostream>
using namespace std;
class Distance
{   int meter;
    public:
    Distance():meter(0){}
    //friend fnx
    friend int addfive(Distance);
};

//friend fnx definition
int addfive(Distance d)
{
    d.meter+=5;
    return d.meter;

}
int main()
{
    class Distance d;
    cout<<"distance :"<<addfive(d);
    return 0;

}
