#include<iostream>
using namespace std;
/*class calc
{   public:
    inline int add(int a,int b)
    { return (a+b);
    }


}a;*/

inline int max(int x,int y)
{   return (x>y)?x:y;

}
int main()
{
    cout<<"Max (20,10):"<<max(20,10)<<"\n";
    cout<<"Max (0,200):"<<max(20,10)<<"\n";
    cout<<"Max (100,1010):"<<max(100,1010)<<"\n";


}
