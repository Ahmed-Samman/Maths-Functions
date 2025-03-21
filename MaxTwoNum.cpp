#include<iostream>
#include<string>
using namespace std;

void Read_Num1_Num2(int &Num1, int &Num2)
{
	cout << "Please enter Number 1: ";
	cin >> Num1;

	cout<< "Please enter Number 2: ";
	cin >> Num2;
}

int Check_Max_Number(int Num1, int Num2)
{

	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void Print_Max_Num(int Max)
{
	cout << "The number Max! = " << Max << endl;
}

int main()
{
	int Num1, Num2;

	Read_Num1_Num2(Num1, Num2);
	Print_Max_Num(Check_Max_Number(Num1, Num2));
	
	return 0;
}