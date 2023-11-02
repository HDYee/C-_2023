#include <iostream>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int Score1, Score2, Score3, Score4, Score5;

	
	cout << "average of five Scores.\n";

	getScore(Score1);
	getScore(Score2);
	getScore(Score3);
	getScore(Score4);
	getScore(Score5);

	
	calcAverage(Score1, Score2, Score3, Score4, Score5);
	
	return 0;
}

void getScore(int &Score)
{
	do
	{
		cout << "Enter a test score: ";
		cin  >> Score;

		if (Score < 0 || Score > 100)
		{
			cout << "Test score must be greater than 0 and less than 100.\n\n";
		}

	} while(Score < 0 || Score > 100);

}

void calcAverage(int Score1, int Score2, int Score3, int Score4, int Score5)
{
	int Lowest; 	
	double Avg;  


	Lowest = findLowest(Score1, Score2, Score3, Score4, Score5);

	if (Lowest == Score1)
		Avg = (Score2 + Score3 + Score4 + Score5)/4.0;
	else if(Lowest == Score2)
		Avg = (Score1 + Score3 + Score4 + Score5)/4.0;
	else if(Lowest == Score3)
		Avg = (Score2 + Score1 + Score4 + Score5)/4.0;
	else if(Lowest == Score4)
		Avg = (Score2 + Score3 + Score1 + Score5)/4.0;
	else
		Avg = (Score2 + Score3 + Score4 + Score1)/4;
	

	cout << "\nThe average of the four highest scores is "
		 << Avg << "\n\n";
}

int findLowest(int Score1, int Score2, int Score3, int Score4, int Score5)
{	
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 &&Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 && Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&Score4 < Score5)
		return Score4;
	else
		return Score5;	
}