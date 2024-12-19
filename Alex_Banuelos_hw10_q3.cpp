/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;

int getNumberRooms ( );//function to ask user number of rooms
double getPriceGallon();//function to ask user the price for each gallon
double getSquareFeet(int);//function to get square feet for each room
double getGallonsRequired(double);//function to determin how many gallons are required
double getLaborHours (double);//function to determin how many hours of labor are required
double getPaintCost(double, double);//function to get the paintcost
double getlaborCost(double);//function to get the labor cost
double getTotalcost(double, double);//function to get the total cost
int main()
{
	//user inputs rooms to paint and turns it into a variable
	int roomsPainted;
	roomsPainted = getNumberRooms();
	//user inputs cost per gallon and turns it into a variable
	double pricePerGallon = getPriceGallon();

	double totalSquareFeet = 0;

	for (int i = 1 ; i <= roomsPainted ; i++)
	{
//asks total square feet for each room
		totalSquareFeet = totalSquareFeet + getSquareFeet(i);
	}
//calculates total gallons required and puts it in a variable
	double gallonsRequired = getGallonsRequired(totalSquareFeet);
//calculates hours of labor
	double laborHours = getLaborHours(totalSquareFeet);
//calculates paintcost,labor cost and total cost and turns it into a variable
	double paintCost = getPaintCost(gallonsRequired, pricePerGallon);
	double laborCost = getlaborCost(laborHours);
	double totalcost = getTotalcost(paintCost,laborCost);
//outputs results
	cout << "Result:" << endl;
	cout << "The number of gallons of paint required: " <<fixed << setprecision(1)<< gallonsRequired << " gallons" << endl;
	cout << "The hours of labor required: " << laborHours << " hours" << endl;
	cout << "The cost of the paint: $" << paintCost << endl;
	cout << "The labor charges: $" << laborCost << endl;
	cout << "The total cost of the paint job: $" << totalcost << endl;


	return 0;
}

int getNumberRooms()//function to ask user for number of rooms and return it
{
	int rooms;
	cout <<"How many rooms are to be painted? "<<endl;

	cin >> rooms;
	while (rooms < 1 )
	{
		cout <<"Invalid input. Please enter a number at least 1:"<<endl;
		cin >> rooms;
	}

	return rooms;
}

double getPriceGallon()//function to ask user the price of paint per gallon
{
	double gallonPrice;
	cout << " What is the price of the paint per gallon? "<<endl;
	cin >> gallonPrice;
	while (gallonPrice < 10)
	{
		cout <<"Invalid input. Please enter a price bigger than $10:"<<endl;
		cin >> gallonPrice;
	}
	return gallonPrice;
}

double getSquareFeet(int roomNumber)//function to get the square feet for each room
{
	double squareFeet;
	cout <<"What is the square footage of wall space in room "<<roomNumber<<endl;
	cin >> squareFeet;
	while(squareFeet < 1)
	{
		cout << "Invalid input. Please enter a positive number:"<<endl;
		cin >>squareFeet;
	}

	return squareFeet;
}

double getGallonsRequired(double totalfeet)//function to calculate total gallons required
{
	double gallonsNeeded;
	gallonsNeeded = totalfeet / 110;
	return gallonsNeeded;
}

double getLaborHours (double totalfeet)//function to calculate total hours of labor needed
{
	double laborHours;
	laborHours = (totalfeet / 110)* 8 ;
	return laborHours;
}

double getPaintCost( double gallonsrequired, double galloncost)//function to get the total paint cost
{
	double paintCost;
	paintCost = gallonsrequired + galloncost;
	return paintCost;
}

double getlaborCost(double laborhours)//function to generate the labor cost
{
	double laborCost;
	laborCost = laborhours * 25;
	return laborCost;
}

double getTotalcost(double paintcost, double laborcost)//function to generate the total cost
{
	double  totalcost;
	totalcost = paintcost + laborcost;
	return totalcost;
}