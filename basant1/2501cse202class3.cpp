#include<iostream>
using namespace std;
class admission
{
    int phone_no,percent;
    char address[100];
    public:
        static int reg_count;
        char name[20];
        void input();
        void display();
        static int getcount()
        {
        return reg_count++;
        }

}add1;

int main()
{
    add1.input();
    add1.display();
   cout<<"Registration Number: "<<add1.getcount();

}
int admission::reg_count=1;
static int getcout()
{
return add1.reg_count++;
}

void admission::input()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Phone Number: ";
    cin>>phone_no;
    cout<<"Enter Percentage (class:12th): ";
    cin>>percent;
    cout<<"Enter address: ";
    cin>>address;

}
void admission::display()
{
    cout<<"Name: "<<name;
    cout<<"Phone Number: "<<phone_no;
    cout<<"Percentage in Class 12th: "<<percent;
    cout<<"Address: "<<address;

}
