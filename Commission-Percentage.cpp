#include<iostream>
#include<cmath>
using namespace std;

int Read_Total_Sales()
{
	int Total_Sales;

	cout << "Enter the total sales: ";
	cin >> Total_Sales;

	return Total_Sales;
}

float Calculate_Precentage(float Total_Sales)
{
	if (Total_Sales > 1000000)
		return 0.01;

	else if (Total_Sales > 500000)
		return 0.02;

	else if (Total_Sales > 100000)
		return 0.03;

	else if (Total_Sales > 50000)
		return 0.05;

	else
		return 0;
}

float Calculate_Toltal_Commission(float Total_Sales)
{
	return  Calculate_Precentage(Total_Sales) * Total_Sales;
}

void Print_Precentage_Commission(float Total_Sales)
{


	cout << "The Precentage is: " << Calculate_Precentage(Total_Sales) << endl;
	cout << "The Toltal Commission is: " << Calculate_Toltal_Commission(Total_Sales) << endl;
}

int main()
{

	Print_Precentage_Commission(Read_Total_Sales());

	return 0;
}