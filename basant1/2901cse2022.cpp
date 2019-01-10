#include<iostream>
using namespace std;
struct person
{   char name[50];
    int age;
    float salary;

};
int main()
{   person p1;
    cout<<"Enter Full Name:";
    cin.get(p1.name,50);
    cout<<"\nEnter Age:";
    cin>>p1.age;
    cout<<"\nEnter Salary:";
    cin>>p1.salary;

    cout<<"\n***Displaying Information***";
    cout<<"\nName: "<<p1.name;
    cout<<"\nAge: "<<p1.age;
    cout<<"\nSalary: "<<p1.salary;



}
