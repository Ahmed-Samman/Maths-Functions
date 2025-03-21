#include<iostream>
#include<cmath>
using namespace std;

void Read_N1_N2_N3(float& Num1, float& Num2, float& Num3)
{	
	 cout << "Please enter Number 1: ";
	 cin >> Num1;

	 cout << "Please enter Number 2: ";
	 cin >> Num2;

	 cout << "Please enter Number 3: ";
	 cin >> Num3;
}

 float Calculate_Nums(float Num1, float Num2, float Num3)
 {   
	 return Num1 + Num2 + Num3;
 }

 void Print_Sum(float Sum)
 {
	 cout << "The sum is: " << Sum << endl;
 }

 int main()
 {
	 float Num1, Num2, Num3;
	 
	 Read_N1_N2_N3(Num1 , Num2 , Num3);
	 Print_Sum(Calculate_Nums(Num1, Num2, Num3));

	 return 0;
 }