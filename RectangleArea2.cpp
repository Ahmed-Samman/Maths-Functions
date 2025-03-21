#include<iostream>
#include<cmath>
using namespace std;

void Read_a_d(float &a, float &d)
{
	cout << "Please enter (side): ";
	cin >> a;
	
	cout << "Please enter (diagonal): ";
	cin >> d;
}

float Calculate_Rectangle_Area(float a, float d)
{
	return a * sqrt(pow(d, 2) - pow(a, 2));
}

void Print_Rectangle_Area(float Area)
{
	cout << "\nThe rectangle area is: " << Area << endl;
}

int main()
{
	float a, d;

	Read_a_d(a, d);
	Print_Rectangle_Area(Calculate_Rectangle_Area(a, d));

	return 0;
}