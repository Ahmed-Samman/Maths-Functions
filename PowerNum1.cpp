#include<iostream>
#include<cmath>
using namespace std;

int Read_Number()
{
	int Num;
	cout << "Please enter the number: ";
	cin >> Num;
	return Num;
}

int Calculate_Num_Of_2(int Num)
{
	return Num * Num ;
}

int Calculate_Num_Of_3(int Num)
{
	return Num * Num * Num;
}

int Calculate_Num_Of_4(int Num)
{
	return Num * Num * Num * Num;
}

void Print_Num_Of_2_3_4(int Num)
{
	cout << "The number of 2 is: " << Calculate_Num_Of_2(Num) << endl;
	cout << "The number of 3 is: " << Calculate_Num_Of_3(Num) << endl;
	cout << "The number of 4 is: " << Calculate_Num_Of_4(Num) << endl;
}

int main()
{
	
	Print_Num_Of_2_3_4(Read_Number());

	return 0;
}