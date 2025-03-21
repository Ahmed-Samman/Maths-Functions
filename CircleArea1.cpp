#include<iostream>
#include<cmath>
using namespace std;

float Read_r()
{
	float r;
	cout << "Please enter (r): ";
	cin >> r;
	return r;
}

float Calculate_Circle_Area()
{
	const float PI = 3.141592653589793238;
	return PI * pow(Read_r(), 2);
}

void Print_Circle_Area(float Area)
{
	cout << "\nThe circle area is: " << Area << endl;
}

int main()
{

	Print_Circle_Area(Calculate_Circle_Area());

	return 0;
}