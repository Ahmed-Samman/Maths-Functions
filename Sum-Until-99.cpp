#include<iostream>
#include<string>
using namespace std;

float Read_Numbers(string Message)
{
	float Num;

	cout << Message;
	cin >> Num;

	return Num;
}

int Sum_Numbers()
{
	float Sum = 0, Number = 0;
	int Counter = 1;

	do
	{
		Number = Read_Numbers("Please enter the number " + to_string(Counter) + ": ");

		if (Number == -99)
		{
			break;
		}	

		Sum += Number;
		Counter ++;

	} while (Number != -99);
	
	return Sum;
}

int main()
{

	cout << "The result = " << Sum_Numbers() << endl;

	return 0;
}