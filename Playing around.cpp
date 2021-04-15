
#include <iostream>
using namespace std;

int main()
{
	char op;
	double num1, num2;
	cout << "Enter the operator ( +, -, / , *)" << endl;
	cin >> op;

	cout << "Enter the two numbers" << endl;
	cin >> num1 >> num2;

  return 0;
}
switch (op) {
case "+":
	cout << num1 << "+" << num2 << "=" << (num1 + num2);
	break;
case "-":
	cout << num1 << "-" << num2 << "=" << (num1 - num2);
	break;
	break;
case "*":
	cout << num1 << "*" << num2 << "=" << (num1 * num2);
	break;
case "/":
	if (num2 != 0.0)
		cout << num1 << "/" << num2 << "=" << (num1 / num2);
	else
		cout << "Divide by Zero situation";
	break;
}


	return 0;

}
