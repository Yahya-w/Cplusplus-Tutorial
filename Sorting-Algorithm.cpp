#include <iostream>	
using namespace std;

int main()
{
	int a[10];
	int memry;
	for (int i = 0; i <= 9; i++)
	{
		cout << i + 1 << ".th enter the number :";
		cin >> a[i];
	};
	for (int w = 0; w <= 9; w++)
	{
		for (int te = 0; te <= 9; te++)
		{
			if (a[w] > a[te]) {   // You can change the operator if you want a different sort type
				memry = a[te];
				a[te] = a[w];
				a[w] = memry;
			};
		};
	};
	cout << endl;
	// print values on screen
	for (int wq = 0; wq <= 9; wq++) {
		cout << wq + 1 << ".th Value : " << a[wq] << endl;
	};
}

