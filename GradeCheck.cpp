#include<iostream>
using namespace std;

int Read_Grade(int From, int To)
{
	int Grade=0;
	do 
	{
		cout << "Please enter the grade from (0) to (100): ";
		cin >> Grade;

	} while (Grade < From || Grade > To);
	
	return Grade;
}

char Check_On_Grades(int Grade)
{
	if (Grade >= 90)
		return 'A';
	
	else if (Grade >= 80)
		return 'B';
	
	else if (Grade >= 70)
		return 'C';
	
	else if (Grade >= 60)
		return 'D';
	
	else if (Grade >= 50)
		return 'E';
	
	else
		return 'F';
}

void Print_Grade(char Rating)
{
	cout << "The grade is: " << Rating << endl;
}

int main()
{

	Print_Grade(Check_On_Grades(Read_Grade(0,100)));

	return 0;
}