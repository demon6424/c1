#include<iostream>
using namespace std;
class B;//forward declaration
 class A
{

    int a;

public:
     void getdata()
    {
        cout<<"enter values"<<endl;
        cin>>a;

    }
    void show()
    {
        cout<<a<<endl;
    }
    friend int greatest(A &p, B &q);
};
 class B
{

    int a;

public:
     void getdata()
    {
        cout<<"enter values"<<endl;
        cin>>a;

    }
    void show()
    {
        cout<<a<<endl;
    }
    friend int greatest(A &p, B &q);
};
int greatest(A &p,B &q)
{

    if(p.a>q.a)
    {
        return (p.a);
    }
    else
    {
        return (q.a);
    }
}
int main()
{

    A obj1;
    B obj2;
    obj1.getdata();
    obj1.show();
    obj2.getdata();
    obj2.show();
    cout<<"greatest number ="<<greatest(obj1,obj2);

}
