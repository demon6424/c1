#include<iostream>
using namespace std;

class Callbyref
{
   int a;
  int b;
  public:
    void getdata(int x,int y)
  {
    a=x;
    b=y;
  }
  Callbyref swap(Callbyref &P)
  {
    int c;
    c=a;
    a=P.a;
    P.a=c;
    c=b;
    b=P.b;
    P.b=c;
    return P;
  }
  void refExample(Callbyref &r)
  {
    r.a=100;
    r.b=200;
  }

  void showdata()
  {
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
  }

};


   int main()
  {

    Callbyref obj1;
    obj1.getdata(10,20);
    Callbyref obj2;
    Callbyref obj3;
    obj2.getdata(20,10);
    cout<<"value before swapping"<<endl;
    obj1.showdata();
    obj2.showdata();
    obj3.showdata();
    obj3=obj1.swap(obj2);
    cout<<"value after swapping"<<endl;
    obj1.showdata();
    obj2.showdata();
    obj3.showdata();
    obj3.refExample(obj2);
    obj2.showdata();


   }


