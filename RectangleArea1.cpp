#include<iostream>
using namespace std;

void Read_A_B(float &A, float &B)
{
	cout << "Enter rectangle width (A): ";
	cin >> A;

	cout << "Enter rectangle length (B): ";
	cin >> B;
}

float Calculate_Rectangle(float A, float B)
{
	return  A * B;
}

void Print_Rectangle_Area(float Area)
{
	cout << "\nThe Rectangle area is: " << Area << endl;
} 

int main()
{
	float A, B;

	Read_A_B(A, B);
	Print_Rectangle_Area(Calculate_Rectangle(A, B));

	return 0;
}