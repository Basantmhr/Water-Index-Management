#include<iostream>
using namespace std;

class box
{
    int height ,width;
    public:
        void setval();
        friend int printval(box);
};
void box::setval()
{
    cout<<"Enter Height :";
    cin>>height;
    cout<<"\nEnter Width:";
    cin>>width;
}
int printval(box b)
{
    b.height+=10;
    b.width+=8;
    cout<<b.height<<"  "<<b.width;
}
int main()
{
    class box b;
    b.setval();
    printval(b);
}
