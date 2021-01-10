#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int x, y;
	srand(time(NULL));
	x = rand() % 100 + 1;
	cout << "Welcome to find number game!";
	getchar();
thisline:
	cout << "Find number :";
	cin >> y;
	if (x == y)
	{
		cout << "You find the number!!!";
	}
	else if (x < y)
	{
		cout << "guess smaller number!\n";
		goto thisline;
	}
	else if (x > y)
	{
		cout << "guess bigger number!\n";
		goto thisline;
	}
}
