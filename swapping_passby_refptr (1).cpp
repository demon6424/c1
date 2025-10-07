#include<iostream>
using namespace std;
class swapping
{

public:
        void swap(int *p,int *q);
};
void swapping :: swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}
int main()
{
    int a,b;
    cout<<"enter values"<<endl;
    cin>>a>>b;
    cout<<"before swapping"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    swapping s;
    s.swap(&a,&b);//call by ref using ptr
    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}

