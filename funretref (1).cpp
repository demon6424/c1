#include<iostream>
using namespace std;
int &fun(int &x);
int main()
{
    int a=10;
    int &p=fun(a);
    cout<<p;
    return 0;
}
int &fun(int &x)
{
  int c;
  c=++x;
  cout<<"c="<<c<<endl;
  return x;
}
