#include<iostream>
#include<cmath>
using namespace std;

float Read_Number_Of_Hours(string Message)
{
	float Num;

	cout << Message;
	cin >> Num;

	return Num;
}

float Hours_To_Days(float Hours)
{
	return Hours / 24;
}

float Hours_To_Weeks(float Hours)
{ 
	return Hours / 24 / 7;
}


int main()
{

	float Num = Read_Number_Of_Hours("Please enter Number of Hours: ");

	cout << "The Weeks = " << round(Hours_To_Weeks(Num)) << " weeks.\n";
	cout << "The Days = " << round(Hours_To_Days(Num)) << " days.\n";
	
	
	return 0;
}