#include<iostream>
#include<cmath>
using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

int Read_Number()
{
	int Num;

	cout << "Please enter the number: ";
	cin >> Num;
	return Num;
}

int Check_Positive_Num()
{
	int N;
	do
	{
		N = Read_Number();

		if (N <= 0)
			cout << "Number must be > 0:\n";
		
	} while (N <= 0);
	
	return N;
}

enPrimeNotPrime Check_Prime(int Number)
{
	int M = round(Number / 2);
	cout << M << endl; // Print 1
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
		
	}
	return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{

	switch (Check_Prime(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "The number is prime!\n";
		break;

	case enPrimeNotPrime::NotPrime:
			cout << "The number is not prime!\n";
			break;
	}
}




int main()
{

	//cout << Check_Prime(Check_Positive_Num()) << endl;


	PrintNumberType(Check_Positive_Num());

	return 0;
}