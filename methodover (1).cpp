#include<iostream>
using namespace std;
class Parent
{

public:
    void show()
    {
        cout<<"we are in Parent show"<<endl;

    }

};
class Child : public Parent
{

public:
    void show()
    {

      cout<<"we are in Child show"<<endl;
      // Parent::show();

    }
};
int main()
{
    Child C;
    C.Parent::show();
    //C.show();
    return 0;
}
