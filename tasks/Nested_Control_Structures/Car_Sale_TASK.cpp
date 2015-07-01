/* 
 * Write a program to calculate the commission value of a car sales 
 * man/women where the employ get 5% commission for ALL car sales. 
 * Additionally they get 2% extra if the car cost exceeds 100K 
 * and another 2% if the car is hard to move.
 *   
 * TEST: 
 *   50k,  hard to move car (x) = $3500
 *   50K,  regular car      (R) = $2500
 *   120K, hard to move car (X) = $10800
 *   120K, regular car      (r) = $8400
 *   
 * Display:
 *   Enter Sales Amount: $70000
 *   Enter Code (X/R): x
 *   Your total commission: $4900
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	const double BASE_COMMISSION = .05;
	const double CODE_COMMISSION = .02;
	const double COST_COMMISSION = .02;
	
	double saleAmount = 0.0, commissionRate = BASE_COMMISSION;
	char code;

	cout << ("\nEnter sales amount: $ ");
	cin >> saleAmount;
	cout << ("Enter code (X/R):");  
	cin >> code;
	code = toupper(code);

	
	// YOUR CODE HERE (Hint: Nested Selection Structures)

}
