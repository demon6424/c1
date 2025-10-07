#include<iostream>
using namespace std;
class student
{

    int roll;
    public:
    void getroll()
    {
        cout<<"enter value of roll no"<<endl;
        cin>>roll;
    }
    void showroll()
    {
        cout<<"roll-no="<<roll<<endl;
    }
};
class exam : virtual public student
{

    protected:
    int sub1;
    int sub2;
    public:
    void getsub()
    {

        cout<<"enter the values for sub1 and sub2"<<endl;
        cin>>sub1>>sub2;
    }
    void showsub()
    {

        cout<<"sub1="<<sub1<<" "<<"sub2="<<sub2<<endl;
    }
};
class sports : public virtual student
{
    protected:
    int sp;
public:
    void getsport()
    {
        cout<<"enter sports marks"<<endl;
        cin>>sp;
    }
    void showsport()
    {
        cout<<"sport marks="<<sp<<endl;
    }
};

class result : public exam, public sports
{
    int total;
public:
    void showresult()
    {
        showroll();
        showsub();
        showsport();
        total=sub1+sub2+sp;
        cout<<"result="<<total<<endl;
    }
};
int main()
{
    result r;
    r.getroll();
    r.getsub();
    r.getsport();
    r.showresult();
    return 0;
}
