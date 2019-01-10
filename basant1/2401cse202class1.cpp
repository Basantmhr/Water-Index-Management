#include<iostream>
using namespace std;
class movie
{   public:
    string movie_name;
    int rel_d,rel_m,rel_y;
    float rate;
    void input();
    void display();
}mov;
int main()
{
    mov.input();
    mov.display();


}
void movie::input()
{   cout<<"Enter Name of the Movie: ";
    getline(cin,movie_name);
    cout<<"\nEnter Release Date / Month /Year Respectively: ";
    cin>>rel_d>>rel_m>>rel_y;
    cout<<"\nEnter Movie Rating: ";
    cin>>rate;


}
void movie::display()
{   cout<<"\n\t******Movie Details******";
    cout<<"\nMovie Name: "<<movie_name;
    cout<<"\nRelease Date: "<<rel_d<<rel_m<<rel_y;
    cout<<"\nIMDB Rating: "<<rate;

}

