#include <iostream>
using namespace std;
int main()
{
	char x;
	cout << "Which color do you want?\nRed(R)\nBlue(B)\nPurple(P)\nGreen(G)\nYellow(Y)";
	cin >> x;
	switch (x)
	{
	case 'R':system("Color 48");
		break;
	case 'B':system("Color 18");
		break;
	case 'P':system("Color 58");
		break;
	case 'G':system("Color 28");
		break;
	case 'Y':system("Color E8");
		break;
	default:cout << "Incorrect entry!\a";
		break;
	}
}
