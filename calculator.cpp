/* This is a simple C++ programe for performing basic Arithmetic operation like addition, subtraction, multiplication and division
#include <iostream>

using namespace std;
float operation(float num1, float num2, char oper);			// function for computing operation
int main()
{
	float n1, n2, result;				// n1, n2 as operands and result of type float to store answer
	char oper;					// char operator for operator 
	cout << "The program is calculator of basic calculations ";
	cout << "\nEnter 1st Operand : ";
	cin >> n1;						// input the first operand
	cout << "Enter 2nd Operand : ";
	cin >> n2;						// input the 2nd operand		
	cout << "Enter operator : ";
	cin >> oper;						// iput the operator 
	result = operation(n1, n2, oper);			// store the result of function operation in result variable

	cout << "This result of integer expression is : " << result << endl;
	system("pause");
	return 0;
}

float operation(float num1, float num2, char oper)
{
	while (true)
	{
		switch (oper)
		{
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			return num1 / num2;
			break;
		default:
			cout << "!!wrong operator!!\nSelect one from the following (+,-,*,/)";
			cin >> oper;
			break;
		}
	}
}
