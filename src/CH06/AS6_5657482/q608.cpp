#include <iostream>
using namespace std;

double getJudgeData();
double calcScore(double, double, double, double, double);
int findHighest(double, double, double, double, double);
int findLowest(double, double, double, double, double);

int main()
{
	int Score1, Score2, Score3, Score4, Score5;

	Score1=getJudgeData();
	Score2=getJudgeData();
	Score3=getJudgeData();
	Score4=getJudgeData();
	Score5=getJudgeData();

	cout << "\nThe contestant's score is "<< calcScore(Score1, Score2, Score3, Score4, Score5);


	return 0;
}

double getJudgeData()
{
    double Score;
	do
	{
		cout << "Enter a judge's score: ";
	    cin  >> Score;

	    if (Score < 0 || Score > 10)
	    {
	    	cout<< "Judge's score must be greater than 0 and less than 10.\n";
	    }

	} while (Score < 0 || Score > 10);
    return Score;
}

double calcScore(double Score1, double Score2, double Score3, double Score4, double Score5)
{	
	int High,Low;
	double Avg; 

	High = findHighest(Score1, Score2, Score3, Score4, Score5);	
	Low  = findLowest(Score1, Score2, Score3, Score4, Score5);

	if (High == (int)Score1)
	{
		if (Low == (int)Score2)
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == (int)Score3)
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == (int)Score4)
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}
	else if (High == (int)Score2)
	{
		if (Low == (int)Score1)
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == (int)Score3)
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == (int)Score4)
			Avg = (Score3 + Score1 + Score5)/3;
		else
			Avg = (Score1 + Score3 + Score4)/3;
	}
	else if (High == (int)Score3)
	{
		if (Low == (int)Score2)
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == (int)Score1)
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == (int)Score4)
			Avg = (Score1 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score1 + Score4)/3;
	}
	else if (High == (int)Score4)
	{
		if (Low == (int)Score2)
			Avg = (Score3 + Score1 + Score5)/3;
		else if (Low == (int)Score3)
			Avg = (Score2 + Score1 + Score5)/3;
		else if (Low == (int)Score1)
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score1)/3;
	}
	else
	{
		if (Low == (int)Score2)
			Avg = (Score3 + Score4 + Score1)/3;
		else if (Low == (int)Score3)
			Avg = (Score2 + Score4 + Score1)/3;
		else if (Low == (int)Score4)
			Avg = (Score3 + Score2 + Score1)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}

	return Avg;
}

int findHighest(double Score1, double Score2, double Score3, double Score4,double Score5)
{
	if (Score1 > Score2 && Score1 > Score3 && Score1 > Score4 && Score1 > Score5)
		return Score1;
	else if (Score2 > Score1 && Score2 > Score3 && Score2 > Score4 &&Score2 > Score5)
		return Score2;
	else if (Score3 > Score2 && Score3 > Score1 && Score3 > Score4 &&Score3 > Score5)
		return Score3;
	else if (Score4 > Score2 && Score4 > Score3 && Score4 > Score1 &&Score4 > Score5)
		return Score4;
	else
		return Score5;
}

int findLowest(double Score1, double Score2, double Score3, double Score4,
			   double Score5)
{
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 &&Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&Score4 < Score5)
		return Score4;
	else
		return Score5;
}