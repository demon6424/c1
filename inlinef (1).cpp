#include<iostream>
using namespace std;
class student
{
    int a,b;
public:
    void getdata()
    {
        cout<<"enter values"<<endl;
        cin>>a>>b;
    }
   inline void showdata();
};
void student :: showdata()
{
    cout<<"a="<<a<<" "<<"b="<<b;
}
int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}
