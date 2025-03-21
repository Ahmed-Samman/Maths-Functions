#include<iostream>
using namespace std;

int Read_Number()
{
	int Num;
	cout << "Please enter the number: ";
	cin >> Num;
	return Num;
}

///////////////////////////////////

enum enOddorEven { Odd = 1, Even = 2 };    // With using enum

enOddorEven Check_Odd_Even(int Count)
{
	if (Count % 2 != 0)
		return enOddorEven::Odd;
	else
		return enOddorEven::Even;
}

float Count_Numbers_With_Enum(int Num)
{
	int Count = 1;
	float Sum = 0;

	for (Count; Count <= Num; Count++)
	{
		if (Check_Odd_Even(Count) == enOddorEven::Even) // We use Even
		{
			cout << Count << endl;
			Sum += Count;
		}
	}
	return Sum;
}

//////////////////////////////////////

int Count_Numbers(int Num)
{
	int Count = 1, Sum = 0;

	for (Count; Count <= Num; Count++)
	{
		if (Count % 2 == 0)
		{
			cout << Count << endl;
			Sum += Count;
		}
	}
	return Sum;
}

void Print_Sum_Even_Numbers(int Sum)
{
	cout << "--------------\n";
	cout << "The sum of numbers is: " << Sum << endl;
}

int main()
{

	Print_Sum_Even_Numbers(Count_Numbers(Read_Number()));
	//Print_Sum_Even_Numbers(Count_Numbers_With_Enum(Read_Number()));

	return 0;
}