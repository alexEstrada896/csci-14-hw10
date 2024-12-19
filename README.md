q2: getScore should only have one parameter (-0.5)

q3: incorrect output on the cost of paint and total cost after testing with same input (-1)

2. (4 pts) Write a complete program in a cpp file that calculates the average of a group of
test scores, where the lowest score in the group is dropped. It should have the following
functions:
● void getScore() should ask the user for a test score, store it in a reference
parameter variable, and validate it. This function should be called by main once
for each of the five scores to be entered.
● void calcAverage() should calculate and display the average of the four
highest scores. This function should be called just once by main and should be
passed the five scores.
● int findLowest() should find and return the lowest of the five scores
passed to it. It should be called by calcAverage, which uses the function to
determine which of the five scores to drop.
The output for the average score should keep one digit after the decimal point.
Do NOT use any global variables. Your program must have function prototypes.
Your program must implement input validation: Do not accept test scores lower than 0
or higher than 100.
Sample input and output:
What is the first score? -1
Invalid score. Please enter a score between 0 and 100: 110
Invalid score. Please enter a score between 0 and 100: 99
What is the second score? 93
What is the third score? 91
What is the fourth score? 87
What is the fifth score: 90
The average score is 93.3

3. (4 pts) Write a complete modular program with multiple functions in a cpp file that
helps a painting company calculate relevant data for its work. This painting company has
determined that for every 110 square feet of wall space, one gallon of paint and eight
hours of labor will be required. The company charges $25.00 per hour for labor. Your
modular program (uses different functions for specific tasks) will prompt the user for
the number of rooms that are to be painted and the price of the paint per gallon. It should
also ask for the square feet of wall space in each room. It should then display the
following data:
● The number of gallons of paint required
● The hours of labor required
● The cost of the paint
● The labor charges
● The total cost of the paint job
All output data will keep one digit after the decimal point.
Do NOT use any global variables. Your program must have function prototypes.
Your program must implement input validation: Do not accept a value less than 1 for
the number of rooms. Do not accept a value less than $10.00 for the price of paint. Do not
accept a value less than 0 for square footage of wall space.
Sample input and output:
How many rooms are to be painted? 0
Invalid input. Please enter a number at least 1: 3
What is the price of the paint per gallon? $9
Invalid input. Please enter a price bigger than $10: $20
What is the square footage of wall space in room 1? -1
Invalid input. Please enter a positive number: 110
What is the square footage of wall space in room 2? 220
What is the square footage of wall space in room 3: 165
Result:
The number of gallons of paint required: 4.5 gallons
The hours of labor required: 36 hours
The cost of the paint: $90
The labor charges: $900
The total cost of the paint job: $990
