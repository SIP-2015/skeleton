/* Please write the rest of the code needed for this calculater.
 * You should use a switch algorithm that reads the users input.
 * Each switch case should have the related mathmatical functions 
 * already listed.
 *
 * Do not allow division by zero.
 *  
 *  DISPLAY:
 *           CALCULATER 
 *
 *      Enter 1 to ADD two numbers. 
 *      Enter 2 to SUBTRACT two numbers. 
 *      Enter 3 to MULTIPLY two numbers. 
 *      Enter 4 to DIVIDE two numbers. 
 *
 *       	Enter your choice here: 4
 *
 *      You selected option 4.
 *      Enter TWO numbers seperated by a space: 7 0
 *      Error: Division by zero is illegal.
 *  --------------------------------------------------------------
 *          Enter your choice here: 3
 *
 *      You selected option 3.
 *      Enter TWO numbers seperated by a space: 5 25
 *      The PRODUCT of 5 and 25 is 125
 *  -------------------------------------------------------------
 *          Enter your choice here: 5
 *
 *      You selected option 5.
 *      Enter the BASE and EXPONENT seperated by a space: 5 2
 *      The exponent of base 5 raised to the power of 2 is 25
 *
 *
 *  HINT: 
 *  Use a nested if/else statment for the division of zero.     
 *
 * 
*/


#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int choice;
	int num1, num2;

	cout << "\t\t CALCULATER \n\n";
	cout << "Enter 1 to ADD two numbers. " << endl;
	cout << "Enter 2 to SUBTRACT two numbers. " << endl;
	cout << "Enter 3 to MULTIPLY two numbers. " << endl;
	cout << "Enter 4 to DIVIDE two numbers. " << endl;
	cout << "Enter 5 to rase a number to a power. " << endl;
	cout << "\n\tEnter your choice here: ";
	cin >> choice;

	if (choice >=1 && choice <=5){

		// YOUR CODE HERE

	} else {
		cout << "Error: Please enter a valid choice." << endl << endl;
	}
}
