#include<iostream>
using namespace std;
class rectangle
{
    int width,height;
    public:
    void set_values (int,int);
    int area()
    {
        return width*height;

    }
};
void rectangle::set_values(int x,int y)
{
    width=x;
    height=y;
}
int main()
{
    rectangle rect,rect2;
    rect.set_values(3,4);
    rect2.set_values(22,45);
    cout<<"Area: "<<rect.area()<<" Area2: "<<rect2.area();
    return 0;
}
