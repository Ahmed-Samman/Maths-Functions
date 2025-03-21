#include<iostream>
#include<cmath>
using namespace std;

struct st_4Times 
{
	int Days, Hours, Minutes, Seconds;

};

st_4Times Read_Times()
{
	st_4Times Times;

	cout << "Please enter Days: ";
	cin >> Times.Days;

	cout << "Please enter Hours: ";
	cin >> Times.Hours;

	cout << "Please enter Minutes: ";
	cin >> Times.Minutes;

	cout << "Please enter Seconds: ";
	cin >> Times.Seconds;

	return Times;
}

int Calculate_Total_Seconds(st_4Times Times)
{
	int Total_Seconds = 0;

	Total_Seconds = (Times.Days * 24 * 60 * 60) 
					+ (Times.Hours * 60 * 60)
					+ (Times.Minutes * 60) 
					+ Times.Seconds;

	return Total_Seconds;
}

void Print_Total_Seconds()
{
	cout << "The total seconds = " << Calculate_Total_Seconds(Read_Times()) << endl;
}

int main()
{

	Print_Total_Seconds();

	return 0;
}