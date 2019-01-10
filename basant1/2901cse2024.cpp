/*write a program to compute the difference two time period entered by the user */
#include<iostream>
using namespace std;
struct timep
{   int h,m,s;
    int dd,mm,yy;

};
int main()
{
    struct timep *ptr1,*ptr2,a,b,c;
    ptr1=&a;
    ptr2=&b;
    cout<<"Enter Date in DD:MM:YY Format:";
    cin>>(*ptr1).dd>>(*ptr1).mm>>(*ptr1).yy;
    cout<<"\nEnter time in  Hour:Min:Second(24 hour hand):";
    cin>>(*ptr1).h>>(*ptr1).m>>(*ptr1).s;
     cout<<"Enter Date in DD:MM:YY Format:";
    cin>>(*ptr2).dd>>(*ptr2).mm>>(*ptr2).yy;
    cout<<"\nEnter time in Hour:Min:Second:(24 hour hand)";
    cin>>(*ptr2).h>>(*ptr2).m>>(*ptr2).s;
    c.h=ptr1->h-ptr2->h;
    c.m=ptr1->m-ptr2->m;
    c.s=ptr1->s-ptr2->s;
    cout<<"\nDifference in Time is: "<<c.h<<":"<<c.m<<":"<<c.s;

}
