#include<iostream>
using namespace std;
class rectangle
{   int lenght ,breadth;
    public:
        rectangle (int x,int y)
        {
        lenght=x,breadth=y;

        }
        int area()
        {
            return lenght*breadth;

        }






};
int main()
{   rectangle rect1(4,6);
    rectangle rect2(5,8);
    cout<<"area is: "<<rect1.area();
    cout<<"\narea is: "<<rect2.area();



}
