#include<Iostream>
#include<cmath>
using namespace std;

void Read_a_b_c(float &a, float &b, float &c)
{
	cout << "Please enter (a): ";
	cin >> a;
	
	cout << "Please enter (b): ";
	cin >> b;
	
	cout << "Please enter (c): ";
	cin >> c;
}

float Calculate_Circle_Area(float a, float b, float c)
{
	const float PI = 3.141592653589793238;

	float P;
	P = (a + b + c) / 2;


	float T;
	T = (a * b * c) / (4 * (sqrt(P * (P - a) * (P - b) * (P - c))));


	return (PI * pow(T, 2));
}

void Print_Circle_Area(float Area)
{
	cout << "The circle area = " << Area << endl ;
}

int main()
{
	float a, b, c;

	Read_a_b_c(a, b, c);
	Print_Circle_Area(Calculate_Circle_Area(a, b, c));

	return 0;
}