#include<iostream>
using namespace std;
class box
{   public:
    static int objectcount;
    box(double l=2.0, double b=2.0, double h=2.0)
    {   cout<<"Constructor Called.\n";
        length =l;
        breadth=b;
        height=h;
        objectcount++;

    }
    double volume()
    {   return length*breadth*height;


    }
    private:
        double length;
        double breadth;
        double height;
};
int box::objectcount=0;
int main()
{
    box box1(3.3,1.2,1.5);
    box box2(8.5,6.0,2.0);
    cout<<"Total objects "<<box::objectcount<<"\n";
    cout<<"The volume is"<<box1.volume();
    return 0;
}

