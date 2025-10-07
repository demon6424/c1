#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=15;  int b=20;
    cout <<setw(10)<<a<<endl<<setw(5)<<b<< endl;
    a=20;
    b=25;
    cout<<setfill('*')<<endl;
    cout<<setw(5)<<a<<endl<<setw(5)<<b<<endl;
    float A = 1.34255;
    cout <<setprecision(4) << A << endl;
    int r=10;
    cout<<setbase(8)<<r;
    return 0;
}



