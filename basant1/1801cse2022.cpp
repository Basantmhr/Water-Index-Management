#include<iostream>
using namespace std;
class rectangle
{
    private:
        int length ,breadth;
    public:
        rectangle()
        {   length=8,breadth=12;


        }
    void area()
    {
        int a=(length*breadth);
        cout<<"area is : "<<a;



    }
    };
int main()
    {


    rectangle r1;
    r1.area();
    }
