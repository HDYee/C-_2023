#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int Min_A_score = 90,
    Min_B_score = 80,
    Min_C_score = 70,
    Min_D_score = 60, 
    Min_possible_score=0;

    char grade;
    bool goodscore = true;
    int testscore;

    cout<<"Enter your numeric test score and i will\n";
    cout<<"tell you the letter grade you earned : ";
    cin >>testscore;

    if (testscore >= Min_A_score)
    {
        grade = 'A';
    }
    else if (testscore >= Min_B_score)
    {
        grade = 'B';
    }
    else if (testscore >= Min_C_score)
    {
        grade = 'C';
    }
    else if (testscore >= Min_D_score)
    {
        grade = 'D';
    }
    else if (testscore >= Min_possible_score)
    {
        grade = 'F';
    }
    else
    {
        goodscore = false;
    }
    
    if (goodscore)
    {
        cout<<"Your grade is "<<grade<<".\n";
    }
    else
    {
        cout<<"The score cannot be below zero. \n";
    }
        return 0;
}
