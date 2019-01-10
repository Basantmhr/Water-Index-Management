#include<iostream>
#include<string.h>
using namespace std;
int main()
{   string mystr;
    cout<<"what's is your name: ";
    getline(cin,mystr);
    cout<<"Hello "<<mystr<<"\n";
    cout<<"What is your favourite team: ";
    getline(cin,mystr);
    cout <<"i like "<<mystr<<" too!\n";
    return 0;

}

