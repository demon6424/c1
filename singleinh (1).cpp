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
class exam : public student
{

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
int main()
{
    exam e;
    e.getroll();
    e.getsub();
    e.showroll();
    e.showsub();
    return 0;
}
