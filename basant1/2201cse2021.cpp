#include<iostream>
using namespace std;
int main()
{

class abc
{
    int a,b,big;
    public:
    abc()
    {
      cout<<"Enter two Numbers: ";
      cin>>a>>b;

    }
    void xyz()
    {   if(a>b)
        big=a;
        else
        big=b;
        cout<<"\n Big No is:"<<big;
    }
    ~abc()
    {
        cout<<"\n Destructor is Under Work.";
    }

};

    abc obj;
    obj.xyz();


    }




