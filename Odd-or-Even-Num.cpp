#include<iostream>
using namespace std;

enum enNumberType {Even = 1, Odd = 0};

int ReadNumber()
{
	int Num;
	cout << "Please enter your number: ";
	cin >> Num;
	return Num;
}

enNumberType CheckNumberType(int Num)
{
	int Result = Num % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "The number is Even.\n";
	else
		cout << "The number is Odd.\n";
}

int main()
{

	PrintNumberType(CheckNumberType(ReadNumber()));

	return 0;
}