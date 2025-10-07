#include <iostream>
using namespace std;

// Here we specify the exceptions that this function
// throws.
void fun(int *ptr, int x) throw (int *, int) // Dynamic Exception specification
{
	if (ptr == NULL)
		throw ptr;
	if (x == 0)
		throw x;
	int c;
	c=*ptr+x;
	cout<<"c="<<c<<endl;
}

int main()
{
	int x=20;
    try{

	fun(&x,10);
    }
    catch(int *p)
    {
        cout<<"inside catch 1-"<<p<<endl;
    }
    catch(int x)
    {
        cout<<"inside catch 2"<<endl;
    }


	cout<<"welcome in dynamic exception";
	return 0;
}
