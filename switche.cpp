#include<iostream>
using namespace std;
int main()
{
    int choice;
    int a,b;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    cout<<"enter values"<<endl;
    cin>>a>>b;
    switch(choice)
    {
    case 1:
        cout<<"addition="<<a+b;
        break;
    case 2:
        cout<<"subtraction="<<a-b;
        break;
    case 3:
        cout<<"multiplication="<<a*b;
        break;
    case 4:
        cout<<"division="<<a/b;
        break;
    default:
        cout<<"wrong choice";
    }
    return 0;

}
