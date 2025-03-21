#include<iostream>
using namespace std;


float Read_BillValue()
{
	float BillValue;

	cout << "Enter bill value: ";
	cin >> BillValue;

	return BillValue;
}

float Calculate_Total_Bill()
{
	const float Services = 1.1, Sales_tax = 1.16;
	
	float Total_Bill;
	Total_Bill = Read_BillValue() * Services;

	return Total_Bill * Sales_tax;
}

int main()
{

	cout << "The total bill is: " << Calculate_Total_Bill() << endl;

	return 0;
}