#include<iostream>
using namespace std;
class base
{

public:
     void virtual show()=0;


     void display()
    {
        cout<<"we are in base display"<<endl;
    }
};
class derived : public base
{
public:
    void show()
    {

        cout<<"we are in derived show"<<endl;
    }
    void display()
    {
        cout<<"we are in derived display";
    }
};
int main()
{

    base *bp;
    derived d;
    bp=&d;
    bp->show();
    bp->display();
    return 0;
}
