#include<iostream>
using namespace std;
class first
{
    protected:
    int a;
public:
    void geta()
    {
        cout<<"enter value for a"<<endl;
        cin>>a;
    }
    void showa()
    {
        cout<<"value of a="<<a<<endl;
    }
};
class second
{
    protected:
    int b;
    public:
    void getb()
    {
        cout<<"enter value for b"<<endl;
        cin>>b;
    }
    void showb()
    {
        cout<<"value of b="<<b<<endl;
    }
};
class third : public first, public second
{
    int c;
public:
    void result()
    {
        c=a+b;
        cout<<"value of c="<<c;
    }
};
int main()
{

    third t;
    t.geta();
    t.getb();
    t.showa();
    t.showb();
    t.result();
    return 0;
}
