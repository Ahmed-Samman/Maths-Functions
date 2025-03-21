#include<iostream>
#include<cmath>
using namespace std;

float Read_Positive_Num(string Message)
{
	float Num;
	do
	{
		cout << Message;
		cin >> Num;

		if (Num <= 0)
			cout << "Number must be > 0:\n";

	} while (Num <= 0);

	return Num;
}

float Calculate_PaidBack(float Total_Bill, int Cash_Paid)
{
	return Cash_Paid - Total_Bill;
}

int main()
{
	float Total_Bill = Read_Positive_Num("Enter the total bill: ");
	float Cash_Paid = Read_Positive_Num("Enter the cash paid: ");


	cout << "\nTotal Bill = " << Total_Bill << endl;
	cout << "Cash Paid = " << Cash_Paid << endl;
	
	cout << "\n**********************\n";
	cout << "Remainder = " << Calculate_PaidBack(Total_Bill, Cash_Paid) << endl;


	return 0;

}