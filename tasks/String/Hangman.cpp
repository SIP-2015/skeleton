/* Creat a program that will play HANGMAN.*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

string THE_WORD;            // word to guess
int wrong;
string soFar;
string used;

bool match(char letter, string word);
char askGuess(string usedLettersStr); //tells the compiler of method askGuess
bool playAgain();

int main()
{
    srand(time(0));

    vector<string> words;  // collection of possible words to guess
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");
    words.push_back("BOOK");
    words.push_back("DIGITAL");
    words.push_back("PROGRAM");

    cout << "\nWelcome to Hangman.  Good luck!\n";

    // YOUR CODE HERE


}

