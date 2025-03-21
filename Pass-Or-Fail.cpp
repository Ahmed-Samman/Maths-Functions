#include<iostream>
using namespace std;

float Read_Mark()
{
	float Mark;
	cout << "Please enter the mark: ";
	cin >> Mark;
	return Mark;
}

bool Chek_Mark(float Mark)
{
	if (Mark >= 50)
		return (Mark >= 50);
	else
		return (Mark >= 50);	
}

void Print_Mark(float Mark)
{
	if (Chek_Mark(Mark))
		cout << "The number: " << Mark << " is 'Pass' !\n";
	else
		cout << "The number: " << Mark << " is 'Fail' !\n";
}

int main()
{
	Print_Mark(Read_Mark());


	return 0;
}
