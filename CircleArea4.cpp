#include<iostream>
#include<cmath>
using namespace std;

float Read_L()
{
	float L;
	cout << "Please enter (R): ";
	cin >> L;
	return L;
}

float Calculate_Circle_Area(float L)
{
	float PI = 3.141592653589793238;

	return pow(L, 2) / (4 * PI);
}

void Print_Circle_Area(float Area)
{
	cout << "\nThe circle area = " << Area << endl;
}

int main()
{

	Print_Circle_Area(Calculate_Circle_Area(Read_L()));
	return 0;
}
