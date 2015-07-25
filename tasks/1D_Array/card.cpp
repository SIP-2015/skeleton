//card class by kenny zenthoefer
#include <iostream> 
using namespace std;

enum Suit{spades, hearts, diamonds, clubs,none}; 

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 1;

class Card
{
private:
  int number;  // 2 to 10, with jack, queen,king,ace
  Suit type;   // clubs, diamond, hearts, spades 
public:
  //must have get two number between 1-13 and 1-4
  bool checkCard();
  void showCard();
  int getValue();
  Suit getSuit();
  Card()
  {
    number = 99;
    type = none;
  }

  Card(int value, int suit)
  {
    if(value >= 1 && value <= 13)
      {number = value;}
    else
      {
	number = 0;
	type = none;
      }
       
    if(suit >=1 && suit <=4)
      {
	if (suit == 1)
	  {
	    type = spades;
	  }
	if (suit == 2)
	  {
	    type = hearts;
	  }
	if (suit == 3)
	  {
	    type = diamonds;
	  }
	if (suit == 4)
	  {
	    type = clubs;
	  }
      }
    else
      {type  = none;}
  }
};


  

  void Card::showCard()
  {
    if(number >= 2 && number <= 10)
      {cout << number;}
    else
      {
	switch(number)
	  {
	  case jack: cout << 'J';break;
	  case queen:cout << 'Q';break;
	  case king: cout << 'K';break;
	  case ace:  cout << 'A';break;
	  default:   cout << 'N';break;
	  }
      }
    switch(type)
      {
      case spades:   cout << 'S';break;
      case diamonds: cout << 'D';break;
      case hearts:   cout << 'H';break;
      case clubs:    cout << 'C';break;
      case none:     cout << 'N';break;
      }
    cout<< " ";
    //cout<< endl;
  }

bool Card::checkCard()
{
  
  if(type == none)
    {return false;}
  else
    {return true;}
}

int Card::getValue()
{
  return number;
}
Suit Card::getSuit()
{
  return type;
}


/*
main()
{
  Card test(7,1);
  Card mess(12,2);
  Card best(13,4);
  Card gest(3,3);
  test.showCard();
  mess.showCard();
  best.showCard();
  gest.showCard();

}
*/
