#include<iostream>
#include<string>
using namespace std;
//void display(char s[]);

void display(char s[])
{
    cout<<"\nYou Entered char array:"<<s;

}
void display(string s)
{
    cout<<"\You entered string :"<<s;
}
int main()
{
    char str[100];
    string str1;
    cout<<"\nEnter a String: ";
    cin.get(str,100);
    cout<<"\nEnter another string";
    getline(cin,str1);
    display(str);
    display(str1);
    return 0;

}
