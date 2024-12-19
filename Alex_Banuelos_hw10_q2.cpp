/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>
#include <iomanip>


void getScore( string, double&);  //function to store each person and their score
void calcAvg (double, double, double, double,double ); //function to calculate average and drop lowest
double findLowest (double, double, double, double,double); //function to find the lowest score to drop
int main()
{
	//variables for each score
	double firstScore;
	double secondScore;
	double thirdScore;
	double fourthScore;
	double fithScore;

	getScore("first", firstScore);
	getScore("second", secondScore);
	getScore("third", thirdScore);
	getScore("fourth", fourthScore);
	getScore("fith", fithScore);

	calcAvg(firstScore,secondScore,thirdScore,fourthScore,fithScore);
	return 0;
}
//findLowest: inputs all the scores and finds the lowest
double findLowest(double Lscore1, double Lscore2, double Lscore3, double Lscore4, double Lscore5)
{
	double lowest = Lscore1;
	if (Lscore2 < lowest)
		lowest = Lscore2;
	if (Lscore3 < lowest)
		lowest = Lscore3;
	if (Lscore4 < lowest)
		lowest = Lscore4;
	if (Lscore5 < lowest)
		lowest = Lscore5;

	return lowest;

}
//calcAvg: inputs all the scores and finds the everage
void calcAvg( double score1, double score2, double score3, double score4, double score5)
{
	//variable to store the lowest score
	double lowestScore = findLowest (score1, score2, score3, score4, score5);
	//calculates average while subrtacting the lowest score
	double avg;
	avg = (score1 + score2 + score3 + score4 + score5 - lowestScore) / 4;
	cout <<" The average score is "<<fixed << setprecision(1) << avg;
}

void getScore( string person, double& score )
{
//asks for user input
	cout << "What is the "<< person <<" score?: "<<endl;
	cin >> score;
	//validates input
	while(score < 0 || score > 100)
	{
		cout << "Invalid score. Please enter a score between 0 and 100:"<<endl;
		cin >> score;
	}
}