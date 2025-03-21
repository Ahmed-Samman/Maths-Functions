#include<iostream>
using namespace std;

void Read_Numbers(int &A,int &B,int &C)
{
	cout << "Please enter Number 1: ";
	cin >> A;

	cout << "Please enter Number 2: ";
	cin >> B;

	cout << "Please enter Number 3: ";
	cin >> C;
}

int Check_Max_Number(int A, int B, int C)
{
	if ((A > B) && ( A > C))
		return A;

	else if ((B > A) && (B > C))
		return B;

	else 
		return C;
}

void Print_Max_Number(int MAX)
{
	cout << "\nThe Max Number is: " << MAX << endl;
}

int main()
{
	int A, B, C;

	Read_Numbers(A, B, C);
	Print_Max_Number(Check_Max_Number(A, B, C));

	return 0;
} 