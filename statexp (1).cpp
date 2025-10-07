#include <iostream>
using namespace std;

int a = 10;

static int fun()
{
    a = 20;
    cout << a << endl;
}

int main()
{
    fun();

    return 0;
}
