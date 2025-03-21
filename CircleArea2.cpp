#include<iostream>
#include<cmath>

using namespace std;

float Read_Diameter()
{
	float D;
	cout << "Please enter (D): ";
	cin >> D;
	return D;
}

float Calculate_Circle_Area(float D)
{
	const float  PI = 3.141592653589793238;

	return (PI * pow(D, 2)) / 4;
}

void Print_Circle_Area(float Area)
{
	cout << "The Circle area is: " << Area << endl;
}

int main()
{

	Print_Circle_Area(Calculate_Circle_Area(Read_Diameter()));

	return 0;
}