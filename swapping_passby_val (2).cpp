#include<iostream>
using namespace std;
class swapping
{

public:
        void swap(int a,int b);
};
void swapping :: swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cout<<"enter values"<<endl;
    cin>>a>>b;
    cout<<"before swapping"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    swapping s;
    s.swap(a,b);
    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}

