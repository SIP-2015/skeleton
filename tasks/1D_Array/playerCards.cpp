//playerCards
//made by kenny Zenthoefer
#include <iostream>
#include "handycards.cpp"

using namespace std;

//note you will need the two programs that you 
// worte this morning, you can you the funtions
// you worte in them.

const int decksize = 52;
Card player1[decksize];
Card player2[decksize];
int player1Score; 
int player2Score;

int compare(Card,Card);
void change(int num,int result);
//compare looks at two cards and says which is greater,
//then it returns three possable return values 1,0,-1

//write a function or 3 to handle those values 

//when a one is return add to player one score 
//when a negtive one is return add to player two score 
//when a zero is return do not add anything 

//inside main that you will be making 
//use compare for  cards both players have 
//and call the function(s) to deal with the result 
  
int compare(Card one, Card two)
{
  if(one.getValue() > two.getValue())//greater then
    {return 1;}
  else if (one.getValue() < two.getValue())//lesser then
    {return -1;}
  else
    {return 0;}
}

int main()
{
  srand(seed);
  int score1;
  int score2;
  int result=0;

  dealhand(player1,player2);
  for(int i = 0; i < decksize/2; i++)
    {
      result = compare(player1[i],player2[i]);
      if(result == 1)
	{score1 +=1;}
      else if(result == -1)
	{score2 +=1;}
      else if (result == 0)
	{/*do noting*/}
      else 
	{
	  std::cout << "something is worng with result";
	}
    }

  std::cout << "player1 score, "<< score1 <<std::endl;
  std::cout << "player2 score, "<< score2 <<std::endl;

}
