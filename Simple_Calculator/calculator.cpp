#include <iostream>
using namespace std;

int main()
{
	char op;
	float x, y;

	cin >> op;

	cin >> x >> y;

	switch (op) {
	case '+':
		cout << x + y;
		break;
    case '-':
		cout << x - y;
		break;
    case '*':
		cout << x * y;
		break;
    case '/':
		cout << x / y;
		break;
    default:
		cout << "Error! operator is not correct";
	}
	return 0;
}