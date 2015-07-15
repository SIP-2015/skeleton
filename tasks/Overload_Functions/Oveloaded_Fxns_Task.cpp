/* Use what you know about overloaded functions to get the file to work. When working correctly, the file should be able to
ask the user to enter in a series of integers and/or words, then return "You have entered:" followed by their entries, with
each individual entry getting its own line. However, for every number entered, it will return that number spelled out in English.
Do not worry, you do not have to write out the functions for this as they have been provided. You may not rename any of the
functions, nor edit them in any way, except for giving them parameters and a return type. Note that you will also have to do
this for when they are instantiated near the top of the file. Essentially, every time you see "Code in Here", that is where
you are allowed to, and in most cases should, type something.

For Example:

Enter words and/or valid integers (no punctuation), with each entry seperated by a space
2456 is a number and so is 2000000
You have entered:
two thousand four hundred fifty-six
is
a
number
and
so
is
two million
*/
/* Delete this line

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
/* "Code in Here"  mystery("Code in Here");
*/

//Spells out numbers w/ <4 digits by using whether or not the number contains 3 digits and whether or not it is part of a larger number. 
//Starts off with an empty string. Adds the hundreds place, if it has one, followed by "hundred". If number input is 0 and is not part of
//a larger number, returns "zero". Moves on to the tens place, and through some test cases, adds either a two digit number ending in 0 or
//beginning with 1. Moves onto the ones place. Adds a hyphen if ones place is not zero.
/* "Code in Here"  mystery("Code in Here"){
string last = "";
if (hundreds){
last += mystery(x / 100, true);
last += mystery(2, false);
if (x % 100 != 0 && issmall){
last += "and ";
}
x -= (x / 100) * 100;
}
else if (issmall && (x / 10 == 0) && (x % 10 == 0)){
return "zero";
}
if ((x / 10) == 8){
last += "eighty";
}
else if ((x / 10) > 5){
last += mystery(x / 10, true);
last += mystery(1, false);

}
else if ((x / 10) > 1){
last += (x / 10 == 2) ? "twenty" : (x / 10 == 3) ? "thirty" : (x / 10 == 4) ? "forty" : "fifty";
}
if (x / 10 == 1){
if (x < 16){
last += (x == 10) ? "ten" : (x == 11) ? "eleven" : (x == 12) ? "twelve" : (x == 13) ? "thirteen" : "fourteen";
}
else{
last += (x == 15) ? "fifteen" : (x == 16) ? "sixteen" : (x == 17) ? "seventeen" : (x == 18) ? "eighteen" : "nineteen";
}

}
else{
if (x > 19 && x % 10 != 0){
last += "-";
}
x = x % 10;
last += mystery(x, true);
}
return last;
}

//Spells out single digit numbers, except if 0, then returns empty.
/* "Code in Here"  mystery("Code in Here"){
return (single == 0) ? "" : (single == 1) ? "one" : (single == 2) ? "two" : (single == 3) ? "three"
: (single == 4) ? "four" : (single == 5) ? "five" : (single == 6) ? "six" : (single == 7) ? "seven"
: (single == 8) ? "eight" : "nine";
}

//Spells out either single digit numbers via helper function or place suffixes
/* "Code in Here"  mystery("Code in Here"){
if (ones){
string name = mystery(digit);
return name;
}
else{
string name = (digit == 0) ? "" : (digit == 1) ? "ty" : (digit == 2) ? " hundred " : (digit == 3) ? " thousand " : (digit == 6) ? " million " : " billion ";
return name;
}
}

//Takes user input and starts the chain call on their entries.
/* "Code in Here"  mystery("Code in Here"){
string sentence;
cout << "Enter words and/or valid integers (no punctuation), with each entry seperated by a space" << endl;
getline(cin, sentence);
return mystery(sentence);
}

//Determines number size and calls helper function accordingly
/* "Code in Here"  mystery("Code in Here"){
string num = "";
if (val / 100 == 0){
num += mystery(val, false, issmall);
}
else{
num += mystery(val, true, issmall);
}
return num;
}

//Breaks number into parts
/* "Code in Here"  mystery("Code in Here"){
string words = "";
int m;
int l;
for (int n = (j - 1) / 3; n >= 0; n--){
l = (pow(10, n * 3));
m = x / l;
x -= (m*l);
words += mystery(m, n, (j<4));
if (m != 0 || n == 0){
words += mystery(n * 3, false);
}
}
return words;
}

//Determines character type
/* "Code in Here"  mystery("Code in Here"){
if (isdigit(y)){
return true;
}
else{
return false;
}
}

//Converts char
/* "Code in Here"  mystery("Code in Here"){
string arrchar = "";
for (int k = 0; k < i; k++){
arrchar += s[x + k];
}
return arrchar;
}

//Calls one of two helper functions
/* "Code in Here"  mystery("Code in Here"){
int j = mystery(s, i);
if (z){
return mystery(s, i, j);
}
else{
if (s[i] == '-'){
return "negative " + mystery(s, i, j);
}
return mystery(s[i], s, i, j);
}
}

//Forms list of entries
/* "Code in Here"  mystery("Code in Here"){
string results = "You have entered:\n";
int len = s._Mysize;
for (int i = 0; i < len; i++){
bool b = mystery(s[i]);
results += mystery(b, s, i);
results += "\n";
i += mystery(s, i);
}
return results;
}

//Measures entry. 
/* "Code in Here"  mystery("Code in Here"){
int counter = 0;
int len = s._Mysize;
while (!(isspace(s[i])) && i < len){
i++;
counter++;
}
return counter;
}

//Converts string
/* "Code in Here"  mystery("Code in Here"){
int num = 0;
for (int k = 0; k < j; k++){
if (!(isdigit(s[i + k])) && k > 0){
return "Invalid Entry: Cannot put letters and symbols in an entry beginning with a number!";
}
int mul = atoi(&(s[i + k]));
if (mul > 2000000000){
return "Invalid Entry: Integer too large.";
}
mul /= pow(10, j - k - 1);
int powten = pow(10, j - k - 1);
num += powten * mul;
}
return mystery(num, j);
}

int main(){
cout << mystery() << endl;
}
*/ //Delete this line
