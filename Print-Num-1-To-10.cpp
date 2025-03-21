#include<iostream>
using namespace std;

int Read_Number()
{
	int Num;
	cout << "Please enter the number: ";
	cin >> Num;
	return Num;
}

void Count_Number_For_Loop(int Num)
{
	int Count = 1;

	cout << "Range printed using For Loop statement:\n";
	
	for (Count; Count <= Num; Count++)
	{
		cout <<  Count << endl;
	}
}

void Count_Number_While_Loop(int Num)
{
	int Count = 1;
	
	cout << "Range printed using While Loop statement:\n";

	while (Count <= Num)
	{
		cout << Count << endl;
		Count++;
	}
}

void Count_Number_Do_While_Loop(int Num)
{
	int Count = 1;

	cout << "Range printed using Do..While Loop statement:\n";

	do
	{
		cout << Count << endl;
		Count++;

	} while (Count <= Num);

}

int main()
{
	int Num = Read_Number();

	Count_Number_For_Loop(Num);
	Count_Number_While_Loop(Num);
	Count_Number_Do_While_Loop(Num);

	return 0;
}