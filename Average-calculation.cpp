#include <iostream>
using namespace std;
int main()
{
	int x, y, total = 0;
	long double z;
	cout << "How many notes will you enter?";
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		cout << i << ". enter the notes";
		cin >> y;
		total += y;
	}
	z = (double)total / x;
	cout << "Result is :" << z;
}
