#include<iostream>
using namespace std;

int Read_Num()
{
	int Num;

	cout << "Please enter your Number: ";
	cin >> Num;
	return Num;
}

float Calculata_Half_Num(int Num)
{
	return float(Num) / 2;
}

void Print_Half_Num(int Num)
{
	cout << "Half of (" << Num << ") is: " << Calculata_Half_Num(Num) << endl;
}

int main()
{
	
	Print_Half_Num(Read_Num());

	return 0;
}