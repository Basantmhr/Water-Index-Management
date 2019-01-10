#include<iostream>
using namespace std;
struct distance
{
    int feet;
    float inches;
};
int main()
{
    struct distance *ptr,d;
     ptr=&d;
     cout<<"\nEnter Feet";
     cin>>(*ptr).feet;
     cout<<"\nEnter Inches";
     cin>>(*ptr).inches;
     cout<<"\nFeet="<<ptr->feet;
     cout<<"\ninches="<<ptr->inches;

}
