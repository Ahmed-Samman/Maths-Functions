#include<iostream>
using namespace std;

struct stinfo
{
	int Age;
	bool DriverLicense;
	bool Recommendation;
};

stinfo Readinfo()
{
	stinfo Information;

	cout << "Please enter your Age: ";
	cin >> Information.Age;

	cout << "Do you have Driver License? ( If Yes enter (1) Otherwise enter (0) ): ";
	cin >> Information.DriverLicense;

	cout << "Do you have Recommendation? ( If Yes enter (1) Otherwise enter (0) ): ";
	cin >> Information.Recommendation;

	return Information;
}

bool IsAccepted(stinfo Information)
{
	bool Result = (Information.Age > 21 && Information.DriverLicense);

	if (Information.Recommendation)
		return true;
	else
		return Result;
		
}

void PrintResult(stinfo Information)
{
	if (IsAccepted(Information))
		cout << "Congratulation: You are Hired.\n";
	else
		cout << "Sorry: You are Rejected.\n";
}

int main()
{
	PrintResult(Readinfo());

	return 0;
}