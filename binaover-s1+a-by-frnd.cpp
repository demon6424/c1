#include<iostream>
using namespace std;
class student
{
 int a;
 public:
 void get(int x)
 {
  a=x;
 }
 void show()
{
 cout<<a<<endl;
}
 friend student operator +(student,int);
};
student operator +(student p,int x)
{
  student temp;
  temp.a=p.a+x;
  return temp;

}
int main()
{
    int a=10;
    student s1,s2;
    s1.get(20);
    s1.show();
    s2=s1+a;//s2=operator+(s1,a);
    s2.show();

    return 0;
}
