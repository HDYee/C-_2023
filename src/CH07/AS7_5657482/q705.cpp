#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int month = 3,day = 30;					
	char weather[month][day];			

	int Sun,Rain,Cloudy,total_Sun = 0,	total_Rain = 0, total_Cloudy = 0,largestR = 0;
		
	ifstream datafile;				
	datafile.open("src/CH07/AS7_5657482/RainOrShine.dat");
	if (!datafile)
		cout << "Error opening data file.";
	else
	{
		for (int row = 0; row < month; row++)
		{
			for (int col = 0; col < day; col++)
			{
				datafile >> weather[row][col];
			}
		}
	}
	datafile.close();


	cout << "\n           Three-month weather report\n"
		 << "--------------------------------------------------\n";
	for (int row = 0; row < month; row++)
	{
		Sun = Rain = Cloudy = 0;
		for (int col = 0; col < day; col++)
		{
			switch (weather[row][col])
			{
				case 'S' : Sun++;
							break;
				case 'R' : Rain++;
							break;
				case 'C' : Cloudy++;
							break;
			}
		}

		cout << "\nFor the month of ";
		if (row == 0)
			cout << "June.\n";
		else if (row == 1)
			cout << "July.\n";
		else if (row == 2)
			cout << "August.\n";

		cout << "Rainy : " << Rain << endl
			 << "Sunny : " << Sun  << endl
			 << "Cloudy: " << Cloudy << endl;

		total_Sun += Sun;
		total_Rain += Rain;
		total_Cloudy += Cloudy;

		if(largestR > Rain)
			largestR = row;
	}

	cout << "\nFor the whole three-month period\n"
		 << "Rainy : " << total_Rain << endl
		 << "Sunny : " << total_Sun  << endl
		 << "Cloudy: " << total_Cloudy << endl;

	cout << "\nMonth with the largest number of rainy days: ";
		if (largestR == 0)
			cout << "June.\n\n";
		else if (largestR == 1)
			cout << "July.\n\n";
		else if (largestR == 2)
			cout << "August.\n\n";

	return 0;
}