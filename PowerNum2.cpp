#include<iostream>
#include<cmath>
using namespace std;

void Read_Num(int& Num, int& M)
{
	cout << "Please enter the number: ";
	cin >> Num;

	cout << "Please enter the (M): ";
	cin >> M;
}

int Check_M(int Num, int M)
{
	int Power = 1;
	int Count = 0;

	if (M == 0)
		cout << Power << endl;
	else
		do 
		{
			Count++;
			Power = Power * Num;

		} while (!(Count==M));
		return Power;
}

void Print_Power_Of_Number(int Num, int M)
{
	cout << "Result: The number (" << Num<< ") of the power (" << M << ") is: " << Check_M(Num, M) << endl;
}

int main()
{
	int Num, M;
	
	Read_Num(Num, M);
	Print_Power_Of_Number(Num, M);

	return 0;
}