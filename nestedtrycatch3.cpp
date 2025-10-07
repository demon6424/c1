#include <iostream>
using namespace std;

int main()
{
	try {

		try {
			throw 20;
		}
		catch (int n) {
			cout << "Handle Partially "<<endl;
			//throw 10; // Re-throwing an exception
		}
		throw 10;
	}
	catch (int n) {
		cout << "Handle remaining "<<endl<<n;
	}
	return 0;
}
