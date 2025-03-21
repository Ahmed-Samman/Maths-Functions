#include<iostream>
#include<cmath>
using namespace std;

struct stCurrencis 
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stCurrencis Read_Currencis()
{
	stCurrencis Currenc;

	cout << "Please enter, How much Pennies? ";
	cin >> Currenc.Pennies;

	cout << "Please enter, How much Nickels? ";
	cin >> Currenc.Nickels;

	cout << "Please enter, How much Dimes? ";
	cin >> Currenc.Dimes;

	cout << "Please enter, How much Quarters? ";
	cin >> Currenc.Quarters;

	cout << "Please enter, How much Dollars? ";
	cin >> Currenc.Dollars;

	return Currenc;
}
 
float Calculate_Total_Pennies(stCurrencis Currenc)
{
	float Total_Pennies;

	Total_Pennies = Currenc.Pennies * 1 + Currenc.Nickels * 5 + Currenc.Pennies * 10
		+ Currenc.Quarters * 25 + Currenc.Dollars * 100;

	return Total_Pennies;
}

float Calculate_Total_Dollars(stCurrencis Currenc)
{

	return Calculate_Total_Pennies(Currenc) / 100;
}

void Print_Total_Pennies_Dollars()
{
	stCurrencis Currenc = Read_Currencis();

	cout << "The total pennies = " << Calculate_Total_Pennies(Currenc) << endl;
	cout << "The total dollars = " << Calculate_Total_Dollars(Currenc) << endl;
}

int main()
{
	
	Print_Total_Pennies_Dollars();

	return 0;
}

