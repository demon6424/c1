#include<iostream>
using namespace std;
class Num
{
    protected:
    int n1,n2;
public:
    void getdata()
    {
        cout<<"enter value for n1 and n2"<<endl;
        cin>>n1>>n2;
    }
    void showdata()
    {
        cout<<"value of n1="<<n1<<endl<<"value of n2="<<n2<<endl;
    }

};
class Addition : public Num
{
    int a;
    public:
    void add()
    {
        a=n1+n2;
        cout<<"after addition value of a="<<a<<endl;
    }

};
class Subtraction : public Num
{
    int s;
public:
    void subtract()
    {
        s=n1-n2;
        cout<<"after subtraction value of s="<<s<<endl;
    }
};
int main()
{

    Addition A;
    A.getdata();
    A.showdata();
    A.add();
    Subtraction S;
    S.getdata();
    S.showdata();
    S.subtract();

    return 0;
}
