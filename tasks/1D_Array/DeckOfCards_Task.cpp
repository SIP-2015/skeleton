//kenny zenthoefer
//deck of cards
#include <iostream>
#include <cstdlib>
#include "card.cpp"

using namespace std; 

const int deckSize = 52;
const int seed = 1000;

Card deck[deckSize];// makes a array

void makeDeck();
void showDeck();
void shuffleDeck();
void Swapper(int ,int);

//for this test it how you want. 

//this funtion is just missing one line, check the comments to see
// how you can make it work 
void makeDeck()
{
  for(int i=0; i<deckSize;i++)
    {
      Card temp = Card(((i%13)+1),(i/13)+1);//makes a Card to be used 
      //right below this line set something = to temp so all the cards in a 
      // normal deck is maked// you just need to worry about get to all 52 spots
    }
}

// make the for loop to see all the cards in the deck
//the line ~deck[i].showCard();~ can be used to print a each card(
// no need to keep the ~
void showDeck()
{

}
//bouns: wirte a funtion to shuffle the deck of cards 
//Swap(num1,num2) can be used to change the location 
// rand()%deckSize can get a random number between 0 and 51 
void shuffleDeck()
{
  int temp = 0;
  srand(seed);//sets up the random number funtion

}

//i am giving this to you, next time you may
//not be so luckly
void Swapper(int i, int j)
{
  Card temp = deck[i];
  deck[i] = deck[j];
  deck[j] = temp;
}

