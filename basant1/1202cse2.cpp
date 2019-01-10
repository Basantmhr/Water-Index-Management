#include<iostream>
#include<string.h>
using namespace std;
class dynamic
{
    char *name;
    int length;
    public:
    dynamic()//first constructor
    {
        length=0;
        name=new char[length=1];

    }
    dynamic(char *s)//second constructor
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);

    }
    void show()
    //method to display name using dynamic allocation in join method
    {
        cout<<"\nName: "<<name;
        cout<<"\nNumber of character in string:"<<strlen(name);

    }
    void join(dynamic &a,dynamic &b)
    {
        length=a.length+b.length;
        delete name;
        name=new char[length+1];
        //dynamic allocation of name using new
        strcpy(name,a.name);
        strcat(name,b.name);
    }
};
int main()
{
    char *first ="Hello! ";
    dynamic name1(first);
    dynamic name2("Technology");
    dynamic name3(" Lovers");
    dynamic s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    s1.show();
    s2.show();
    name1.show();
    name2.show();
    name3.show();
    return 0;
}

