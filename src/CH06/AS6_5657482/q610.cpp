#include <iostream>
#include <cmath>

using namespace std;

double presentValue(double, double, int);

int main()
{
	double P_Value,F_Value,AI_Rate;
	int Yrs;

	cout<< "Enter the amount you would like want in the account in the future : ";
	cin  >> F_Value;
	cout << "Enter your annual interest rate : ";
	cin  >> AI_Rate;
	cout << "How many years do you plan to let the money sit in the account? ";
	cin  >> Yrs;

	P_Value = presentValue(F_Value, AI_Rate, Yrs);

	
	cout << "You need to deposit $" << P_Value << " to have a balance of $"
		 << F_Value << " in " << Yrs << " years.\n\n";

	return 0;
}

double presentValue(double FValue, double AIRate, int Yrs)
{
	return FValue / pow(1 + AIRate, Yrs);
}