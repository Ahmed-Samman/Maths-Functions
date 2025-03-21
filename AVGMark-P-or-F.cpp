#include<iostream>
using namespace std;

enum enmark {Pass=1, Fail=2};

void Read_M1_M2_M3(int& M1, int& M2, int& M3)
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
	return float(Sum_Marks(M1, M2, M3) / 3);
}

enmark Check_AVG(int M1, int M2, int M3)
{
	if (AVG_Sum(M1, M2, M3) >= 50)
		return enmark::Pass;
	else
		return enmark::Fail;
}

void Print_AVG(int M1, int M2, int M3)
{
	if (Check_AVG(M1, M2, M3) == enmark::Pass)
	{
		cout << "The avrage is: " << AVG_Sum(M1, M2, M3) << endl;
		cout<< "Pass!\n";
	}
	else
	{
		cout << "The avrage is: " << AVG_Sum(M1, M2, M3) << endl;
		cout << "Fail!\n";
	}
}

int main()
{
	int M1, M2, M3;

	Read_M1_M2_M3(M1, M2, M3);
	Print_AVG(M1, M2, M3);
	 
	return 0;
}