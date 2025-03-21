#include<iostream>
using namespace std;

int Check_Number_Positive(string Message)
{
	int Num;

	do
	{
		cout << Message;
		cin >> Num;
		
		if (Num <= 0)
			cout << "\nFactorial must be Positive!\n\n";

	} while (Num <= 0);

	return Num;
}

float Factorial_Numbers(int Num)
{
	int Count = Num;
	float Factorial = 1;

	for (Count; Count >= 1; Count--)
	{
		cout << Count << endl;
		Factorial = Factorial * Count;
	}
	return Factorial;
}

void Print_Factorial(float Factorial)
{
	cout << "----------\n";
	cout << "The factorial is: " << Factorial << endl;
}

int main()
{

	Print_Factorial(Factorial_Numbers(Check_Number_Positive("Please enter the positive number: ")));

	return 0;
}