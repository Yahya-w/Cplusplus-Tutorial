#include <iostream>
using namespace std;
int main()
{
	int a;
	int *ptr = &a;
	cout << "Enter a value :";
	cin >> a;
	cout << "First value :" << a << endl;
	*ptr += 5;
	cout << "Second value :" << a;
}
