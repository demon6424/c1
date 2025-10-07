#include <iostream>
using namespace std;

int main()
{
	try {

			throw 20;
	}

		catch (int n) {
			cout << "Handle Partially "<<endl;
			try
			{
			    throw 30;
			}

			catch(int n)
			{
			    cout<<"nested catch try";
			}
		}
		//throw 10;

	return 0;
}
