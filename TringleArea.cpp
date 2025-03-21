#include<iostream>
#include<cmath>
using namespace std;

void Read_a_h(float &a, float &h)
{
	cout << "Please enter (a): ";
	cin >> a;

	cout << "Please enter (h): ";
	cin >> h;
}

float Calculate_Tringle_Area(float a, float h)
{
	return (a / 2) * h;
}

void Print_Tringle_Area(float Area)
{
	cout << "\nThe Tringle area is: " << Area << endl;
}

int main()
{
	float a, h;

	Read_a_h(a, h);
	Print_Tringle_Area(Calculate_Tringle_Area(a, h));

	return 0;
}