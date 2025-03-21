#include<iostream>
using namespace std;

void Read_Num1_Num2(int &Num1, int &Num2)
{
	cout << "Please enter Number1: ";
	cin >> Num1;

	cout << "Please enter Number2: ";
	cin >> Num2;
}

void Print_Num1_Num2(int Num1, int Num2)
{
	cout << "Number1 = " << Num1 << endl;
	cout << "Number2 = " << Num2 << endl;
	cout << "--------------\n";
}

void Swap_Number(int &Num1, int &Num2)
{
	int Swap;

	Swap = Num1;
	Num1 = Num2;
	Num2 = Swap;
}

int main()
{
	int Num1, Num2;
	
	Read_Num1_Num2(Num1, Num2);
	Print_Num1_Num2(Num1, Num2);
	Swap_Number(Num1, Num2);
	Print_Num1_Num2(Num1, Num2);

	return 0;
}