#include <iostream>
using namespace std;
int main()
{
	char x[100];
	cout << "Enter word :";
	cin >> x;
	int y = strlen(x);
	bool palindrome = true;
	if (y > 0)
	{
		for (int i = 0; i < y; i++)
		{
			if (x[i] != x[y - 1 - i])
			{
				cout << "Word is not palindrome!";
				goto thisline;
			}
		}
	}
	if (palindrome == true)
	{
		cout << "Word is palindrome!";
	}
thisline:;
}
