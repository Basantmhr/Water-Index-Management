#include<iostream>
using namespace std;
class demo
{
    int x,y;
    public:
    demo(int a,int b)
    {   x=a;
        y=b;
    }
    friend class frnd;
}d;
class frnd
{   public:
    void display(demo d);
    { cout<<"x="<<d.x;
      cout<<"y="<<d.y;
    }

}f;
void main()
{
    demo d(4,6);
    frnd f;
    f.display();

}
