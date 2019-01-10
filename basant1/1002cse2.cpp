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

int main()
{
    int a,b;
    cout<<"Enter Two Number:";
    cin>>a>>b;
    swapn (a,b);
    swapn (20,30);
    swapn (10,b);
}

