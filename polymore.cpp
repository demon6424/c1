#include<iostream>
using namespace std;
class Parent
{

public:
     void virtual show()
     {
         cout<<"we are in parent show"<<endl;
     }


     void display()
    {
        cout<<"we are in parent display"<<endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {

        cout<<"we are in child show"<<endl;
    }
    void display()
    {
        cout<<"we are in child display"<<endl;
    }
};
int main()
{

    Parent *pp;
    Child c;
    pp=&c;
    pp->show();
    pp->display();
    return 0;
}
