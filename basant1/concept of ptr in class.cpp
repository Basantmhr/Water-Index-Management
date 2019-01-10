#include<iostream>
using namespace std;
int main()
{
    class student
    {   int r;
        char n[30];
    public:
        void getdata()
        {
            cout<<"Enter Roll No: ";
            cin>>r;
            cout<<"\nEnter Name: ";
            cin>>n;


        }
        void display()
        {   cout<<"Roll No: "<<r<<"\n";
            cout<<"Name: "<<n<<"\n";

        }
    };
    student abc;
    student *ptr;
    ptr=&abc;
    (*ptr).getdata();
    ptr->display();





    }


