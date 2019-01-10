#include<iostream>
using namespace std;
class circle
{       int radius;
    public:
        void circ( int);
        int area()
        {
        return 3.14*radius*radius;
        }


}circ1,circ2;
void circle::circ(int x)
{
   radius=x;

}

int main()

{   circ1.circ(6);
    cout<<"area is :"<<circ1.area()<<"\n";
    circ2.circ(9);
    cout<<"area is :"<<circ2.area();
    return 0;







}
