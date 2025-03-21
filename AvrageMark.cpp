#include<iostream>
#include<cmath>
using namespace std;

void Read_M1_M2_M3(int & M1, int& M2, int& M3)
{
	cout << "Please enter Mark 1: ";
	cin >> M1;

	cout << "Please enter Mark 2: ";
	cin >> M2;

	cout << "Please enter Mark 3: ";
	cin >> M3;
}

int Sum_Marks(int M1, int M2, int M3)
{
	return (M1 + M2 + M3);
}

float AVG_Sum(int M1, int M2, int M3)
{
	return float (Sum_Marks(M1, M2, M3) / 3);

}

void Print_AVG(float AVG)
{
	cout << "The avrage is: " << AVG << endl;
}

int main()
{
	int M1, M2, M3;

	Read_M1_M2_M3(M1, M2, M3);
	Print_AVG(AVG_Sum(M1, M2, M3));
	
	return 0;
}