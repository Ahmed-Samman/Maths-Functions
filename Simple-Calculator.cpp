#include<iostream>
#include<cmath>
using namespace std;

enum enOperationType{Add = '+', Subtract = '-', Multiply = 'x', Divide = '/'};

float Read_Num1_Num2(string Message)
{
	float Number;

	cout << Message;
	cin >> Number;

	return Number;
}

enOperationType Read_Operation_Type(string Message_OP)
{
	char Operation_Type;

	cout << Message_OP;
	cin >> Operation_Type;

	return enOperationType(Operation_Type);
}

float Calculate_Operation(float Num1, float Num2, enOperationType Oper_Type)
{
	switch (Oper_Type)
	{
	case enOperationType::Add:
		return Num1 + Num2;

	case enOperationType::Subtract:
		return Num1 - Num2;

	case enOperationType::Multiply:
		return Num1 * Num2;

	case enOperationType::Divide:
		return Num1 / Num2;

	default:
		return 0;
	}
}

int main()
{

	float Num1 = Read_Num1_Num2("Please enter the first number: ");
	float Num2 = Read_Num1_Num2("Please enter the second number: ");

	enOperationType Oper_Type = Read_Operation_Type("Choose the Operation type (+), (-), (x), (/): ");

	cout << "The result is: " << Calculate_Operation(Num1, Num2, Oper_Type) << endl;


	return 0;
}