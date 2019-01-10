#include<iostream>
using namespace std;
extern int flag=0;
class mobile
{   long sim_no1,sim_no2;
    public:
    int yy,nosim;
    char manuf_name[20],model_name[20],color[20];
    void input();
    void display();
    void is_single_sim();
}mob;
int main()
{
    mob.input();
    mob.display();
    mob.is_single_sim();
}
void mobile::input()
{   cout<<"Enter Manufacturer Name: ";
    cin>>manuf_name;
    cout<<"\nEnter Model Name:";
    cin>>model_name;
    cout<<"\nEnter Colour:";
    cin>>color;
    cout<<"\nEnter 1 for Single SIM or 2 for Dual SIM:";
    cin>>nosim;
    if(nosim==1)
    {   cout<<"\nEnter SIM Number:";
        cin>>sim_no1;
        flag=1;
    }
    else
    {   cout<<"\nEnter Number of 1st SIM:";
        cin>>sim_no1;
        cout<<"\nEnter Number of 2nd SIM:";
        cin>>sim_no2;
    }
    cout<<"\nEnter Year of Manufacture:";
    cin>>yy;

}
void mobile::is_single_sim()
{
    if (nosim==1)
    cout<<"\nMobile is Single SIM.";
    else
    cout<<"\nMobile is Dual SIM.";
}
void mobile::display()
{   cout<<"\nManufacturer Name:"<<manuf_name;
    cout<<"\nModel Name:"<<model_name;
    cout<<"\nColour:"<<color;
    if(flag=1)
    {
    cout<<"\nSim No:"<<sim_no1;
    }
    else
    {   cout<<"\nSIM No1:"<<sim_no1;
        cout<<"\nSIM No2:"<<sim_no2;
    }
    cout<<"\nYear of Manufacture:"<<yy;

}
