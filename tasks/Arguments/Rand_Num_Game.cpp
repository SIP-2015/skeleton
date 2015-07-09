/*   Design an algorithm to play a number guessing game.  You will need to get a random number.  
 *   User will enter guesses and algorithm should return whether the guess was too high or too low - or just right.
 *   Algorithm should keep count of the number of guesses and display how many guesses it took to find the number.
 *
 *
 * 	Display:
 *
 *			Welcome to the Guessing Game.
 *		I have a secret number between 1 and 100. CAN YOU GUESS IT??
 *
 *		Please enter a guess: 56
 *		Too High.
 *		Please enter a guess: 35
 *		Too High.
 *		Please enter a guess: 24
 *		Too Low.
 *		Please enter a guess: 25
 *		Too Low.
 *		Please enter a guess: 26
 *
 *
 *		Correct!! You Win!!
 *		The secret number was: 26 and you guessed it in 5 turns.
 *
 *
 */


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void playGame();
void getRandomNumber(int& number);
void getUserGuess(int& guess);
string evaluateGuess(int secret, int guess);

int main (){

	srand((unsigned)time(0));
	int secret = rand() % 100 +1;

	playGame();

}

void playGame()
{
	// YOUR CODE HERE
}

void getRandomNumber(int& number)
{
	number = rand() % 100 + 1;
}

void getUserGuess (int& guess)
{
	// YOUR CODE HERE
}

string evaluateGuess(int secret, int guess)
{
	// YOUR CODE HERE
}
