#include <iostream>
using namespace std;
int main()
{
	char x;
	cout << "Welcome to calculator!";
	getchar();
	cout << "Which one do you want?\n'Addition(A)'\n'Extraction process(E)'\n'Multiplication(M)'\n'Division(D)'";
	cin >> x;
	if (x == 'A' || x == 'a')
	{
		int add, xa, re = 0;
		falseentry:
		cout << "How many number will you add?";
		cin >> add;
		if (add <= 1) 
		{
			cout << "Incorrect entry!!\a\n";
			goto falseentry;
		}
		for (int i = 1; i <= add; i++)
		{
			cout << i << ". enter the number :";
			cin >> xa;
			re += xa;
		}
		cout << "Result is :" << re;
	}
	if (x == 'E' || x == 'e')
	{
		int tco, sn, res;
		cout << "Enter the number that comes out";
		cin >> tco;
		cout << "Enter the subtracted number";
		cin >> sn;
		res = tco - sn;
		cout << "Result is :" << res;
	}
	if (x == 'M' || x == 'm')
	{
		
		int mlp, tpl, lkm = 1;
		cout << "How many numbers will you multiply?";
		cin >> mlp;
		for (int w = 1; w <= mlp; w++)
		{
			cout << w << ". enter the number :";
			cin >> tpl;
			lkm *= tpl;
		}
		cout << "Result is :" << lkm;
	}
	if (x == 'D' || x == 'd')
	{
		int dv, dvs;
		double resu;
		ens:
		cout << "Divided :";
		cin >> dv;
		cout << "Divisor :";
		cin >> dvs;
		if (dvs > dv)
		{
			cout << "Incorrect entry!\a\n";
			goto ens;
		}
		resu = (double)dv / dvs;
		cout << "Result is :" << resu;
	}
}
