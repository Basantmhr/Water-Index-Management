#include<iostream>
using namespace std;
class counter
{  private:
        int c;
    public:
        counter();
        counter(int a)
        {
        c=a;
        }
        counter(counter&ob)
        {
        cout<<"Copy constructer invoked";
        c=ob.c;


        }




};
int main()
{
counter c1(10);
counter c2(c1);


}
