#include<iostream>
using namespace std;
class autos
{   public:
    string manufacturer,model,color;
    int eng_no,chassi_no,year;
    void input();
    void display();

}att;

int main()
{   att.input();
    att.display();


}
void autos::input()
{   cout<<"Enter Name of Manufacturer: ";
    getline(cin,manufacturer);
    cout<<"Enter Name of Model";
    getline(cin,model);
    cout<<"\nEnter Colour of Car: ";
    getline(cin,color);
    cout<<"\nEnter Engine Number: ";
    cin>>eng_no;
    cout<<"\nEnter Chassi Number: ";
    cin>>chassi_no;
    cout<<"\nEnter Year of Manufacture(YYYY) :";
    cin>>year;

}
 void autos::display()
{
    cout<<"\t\t*****Details of Car*****";
    cout<<"\n Name of Manufacturer :"<<manufacturer;
    cout<<"\nModel Name: "<<model;
    cout<<"\nColour :"<<color;
    cout<<"\nEngine No: "<<eng_no;
    cout<<"\nChassi No"<<chassi_no;
    cout<<"\nYear of Manufacture: "<<year;

}

