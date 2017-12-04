#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
int zm1=0;

	cout << "Podaj liczbe do sprawdzenia" << endl;
	cin >> zm1;
	
	if (zm1%2 ==0)
	{
		cout << "parzysta\n";
	}
	else
	{
	cout << "nieparzysta" << endl;
	}
	
	return 0;
}
