#include <iostream>
#include<cmath>
using namespace std;

float Read_A()
{
	float A;

	cout << "Plerase enter (A): ";
	cin >> A;

	return A;
}

float Calculate_Asquare()
{
	const float PI= 3.141592653589793238;

	return (PI * pow(Read_A(), 2)) / 4;
}

void Print_Circle_Area(float Area)
{
	cout << "\nThe Circle area is: " << Area << endl;
}

int main()
{

	Print_Circle_Area(Calculate_Asquare());
	return 0;
}