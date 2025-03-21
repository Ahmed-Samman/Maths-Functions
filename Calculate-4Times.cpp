#include<iostream>
#include<cmath>
using namespace std;

struct st4_Times
{
	int Days, Hours, Minutes, Seconds;
};

int Read_Total_Seconds(string Message)
{
	int Num;

	cout << Message;
	cin >> Num;
	return Num;
}

st4_Times Calculate_Times(int Total_Seconds)
{
	st4_Times Times{};

	const int Second_Per_Day = 24 * 60 * 60;
	const int Second_Per_Hour = 60 * 60;
	const int Second_Per_Minute = 60;

	int Remainder = 0;

	Times.Days = floor(Total_Seconds / Second_Per_Day);
	Remainder = Total_Seconds % Second_Per_Day;

	Times.Hours = floor(Remainder / Second_Per_Hour);
	Remainder = Remainder % Second_Per_Hour;

	Times.Minutes = floor(Remainder / Second_Per_Minute);
	Remainder = Remainder % Second_Per_Minute;

	Times.Seconds = Remainder;

	return Times;
}

void Print_4_Times(st4_Times Times)
{

	cout << endl << Times.Days << ":" << Times.Hours << ":" << Times.Minutes << ":" << Times.Seconds << endl;
}

int main()
{

	int Total_Seconds = Read_Total_Seconds("Please enter the total seconds: ");

	Print_4_Times(Calculate_Times(Total_Seconds));

	return 0;
}