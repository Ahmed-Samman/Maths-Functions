#include<iostream>
using namespace std;

int Read_Age()
{
	int Age;
	cout << "Please, enter your age: \n";
	cin >> Age;
	return Age;
}

bool Check_Age(int Age)
{
	return (Age >= 18 && Age <= 45);
}

void Print_Age(int Age)
{
	if (Check_Age(Age) == true)
		cout << "The (" << Age << ") is Valid.\n";
	else
		cout << "The (" << Age << ") is Invalid.\n";
}
int main()
{
	Print_Age(Read_Age());
	
	return 0;
}