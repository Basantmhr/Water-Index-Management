#include<iostream>
using namespace std;
int main()
{
    string str1="hello";
    string str2="world";
    string str3;
    int len;
    str3=str1;
    cout<<"str3="<<str3;
    str3=str2+str1;
    cout<<"str1+str2"<<str3;
    len=str3.size();
}
