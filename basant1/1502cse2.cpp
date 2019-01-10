#include<iostream>
#include<string>
using namespace std;

void display(string str)
{
cout<<"size ="<<str.size();
cout<<"\nLength ="<<str.length();
cout<<"\nCapacity ="<<str.capacity();
cout<<"\nMax Size ="<<str.max_size();
cout<<"\nEmpty ="<<(str.empty()?"yes":"no");


}
int main()
{   string str;
    str="hello";
    display(str);

}
