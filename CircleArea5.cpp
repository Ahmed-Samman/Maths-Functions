#include<iostream>
#include<cmath>
using namespace std;

void Read_a_b(float &a, float &b)
{
	cout << "Please enter (a): ";
	cin >> a;

	cout << "Please enter (b): ";
	cin >> b;
}

float Calculate_Circle_Area(float a, float b)
{
	float Area, const float PI = 3.141592653589793238;

	Area = (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	
	return Area;
}

void Print_Circle_Area(float Area)
{
	cout << "The circle area = " << Area << endl;
}

int main()
{
	float a, b;

	Read_a_b(a, b);
	Print_Circle_Area(Calculate_Circle_Area(a, b));
	return 0;
} 