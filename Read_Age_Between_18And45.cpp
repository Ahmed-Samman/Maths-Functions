#include<iostream>
using namespace std;

int Read_Age()
{
	int Age;
	cout << "Please, How old are you? \n";
	cin >> Age;
	return Age;
}

bool Check_Number(int Number)
{
	return (Number >= 18 && Number <= 45);
}

int Check_Valid_Dowhile()
{
	int Age;
	do
	{
		Age = Read_Age();

	} while (!Check_Number(Age));
	return Age;
}

void Print_Valid(int Age)
{
	cout << "The (" << Age << ") is valid.\n";
}

int main()
{
	
	Print_Valid(Check_Valid_Dowhile());


	return 0;
}