#include <iostream>
#include <string>

using namespace std;

void getData(double[], int);
double totalRainfall(double [], int);
double averageRainfall(double [], int);
int driestMonth(double [], int);
int wettestMonth(double [], int);
void displayReport(double, double, int, int, double[], int);
string getMonth(int);

int main()
{
	const int mths = 12;
	double rainfall[mths];
	double Total, Average, Least, Most;

	getData(rainfall, mths);

	Total = totalRainfall(rainfall, mths);
	Average = averageRainfall(rainfall, mths);
	Least = driestMonth(rainfall, mths);
	Most = wettestMonth(rainfall, mths);
	displayReport(Total, Average, Least, Most, rainfall, mths);

	return 0;
}

void getData(double rainfall[], int mths)
{
	double rain;

	cout << "Enter the total rainfall for each of 12 months.\n";
	for (int i = 0; i < mths; i++)
	{
		do
		{
			cout << "Month #" <<  (i + 1) << ": ";
			cin >> rain;

			if (rain < 0)
				cout << "Error! Rainfall amounts must be greater than 0.\n";

		} while(rain < 0);
		
		rainfall[i] = rain;
	}	 
}

double totalRainfall(double rainfall[], int mths)
{
	double tot = 0;  // Accumulate total rainfall

	for (int i = 0; i < mths; i++)
	{
		tot += rainfall[i];
	}

	return tot;
}

double averageRainfall(double rainfall[], int mths)
{
	return totalRainfall(rainfall, mths) / mths;
}

int driestMonth(double rainfall[], int mths)
{	
	double Driest = rainfall[0];
	int R;
	for (int i = 0; i < mths; i++)
	{
		if(rainfall[i] < Driest)
		{
			Driest = rainfall[i];
			R = i;
		}
	}
	return R;
}

int wettestMonth(double rainfall[], int mths)
{
	double Wettest = rainfall[0];
	int R;
	for (int i = 0; i < mths; i++)
	{
		if(rainfall[i] > Wettest)
		{
			Wettest = rainfall[i];
			R = i;
		}
	}
	return R;
}

void displayReport(double T, double A, int L, int M, double R[], int S)
{
	cout << "\n2010 Rain Report for Neversnows County"<<endl;
    cout<<"---------------------------------------"<<endl;
	cout << "Total rainfall: " << T << " inches\n";
	cout << "Average monthly rainfall: " << A << " inches\n";
	cout << "The least rain fell in " << getMonth(L) << " with "
		 << R[L] << " inches.\n";
	cout << "The most rain fell in " << getMonth(M) << " with "
		 << R[M] << " inches.\n";
}

string getMonth(int Mth)
{
	string M;
	switch (Mth + 1)
	{
		case 1 : M = "January";
				 break;
		case 2 : M = "February";
				 break;
		case 3 : M = "March";
				 break;
		case 4 : M = "April";
				 break;
		case 5 : M = "May";
				 break;
		case 6 : M = "June";
				 break;
		case 7 : M = "July";
				 break;
		case 8 : M = "August";
				 break;
		case 9 : M = "September";
				 break;
		case 10: M = "October";
				 break;
		case 11: M = "November";
				 break;
		case 12: M = "December";
				 break;
	}
	return M;
}