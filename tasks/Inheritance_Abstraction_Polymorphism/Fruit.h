#ifndef FRUIT
#define FRUIT
#include "Food.h"
#include <iostream>
#include <stdlib.h>
#include <string>

class Fruit: public Food{
protected:
	string color;
	double weight;
public:
	virtual bool edibleSkin() = 0;
	Fruit(string s = "", double w = 0) : Food(s, w){}
	~Fruit(){}
};


#endif //FRUIT