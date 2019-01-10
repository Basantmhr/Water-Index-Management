//swap two number using call by value and call by reference
#include<iostream>
using namespace std;
//swap(int,int)
int swapn (int x,int y)
{   int z=x;
        x=y;
        y=z;
        cout<<"\nValue After Swap is: "<<x<<" "<<y;

}

int swap2(int &a,int &b)
{
    int d;
    d=a;
    a=b;
    b=d;
    cout<<"\nValue after swap using call by reference is:"<<a<<" "<<b;
}
int main()
{
    int a,b;
    cout<<"Enter Two Number:";
    cin>>a>>b;
    swapn (a,b);
    swap2(a,b);
}

