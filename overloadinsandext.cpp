#include <iostream>
using namespace std;

class student
{
private:
	int a,b;
public:

	friend ostream  & operator << (ostream &, student &);
	friend istream  & operator >> (istream &, student &);
};
ostream & operator << (ostream &ram,student &c)
{
	ram <<c.a<<" ";
	ram <<c.b<< endl;
	return ram;
}

istream & operator >> (istream &raj, student &c)
{
	cout << "Enter values for a and b"<<endl;
	raj>>c.a>>c.b;
	return raj;
}

int main()
{
student c1;
cin >> c1;
cout << "values of a and b are"<<endl;
cout << c1;
return 0;
}
