#include <iostream>
using namespace std;

int main()
{

	try {
	throw 10.5f;
	}
	catch (int excp) {
		cout << "Caught " << excp;
	}
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}
