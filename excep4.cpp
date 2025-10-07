#include <iostream>
using namespace std;

int main()
{

	cout<<"hello";
	try {
	throw 'a';
	}

	catch (int x) {
		cout << "Caught ";
	}
     cout<<"after the catch";
	return 0;
}
