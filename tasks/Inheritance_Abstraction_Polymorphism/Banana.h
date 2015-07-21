#ifndef BANANA
#define BANANA

#include "Fruit.h"
#include <iostream>
#include <stdlib.h>
#include <string>

class Banana: public Fruit{
protected:
	string color;
	double weight;
public:
	bool edibleSkin(){ return false; }
	Banana(string s = "yellow", double w = 0) :Fruit(s, w){}
	~Banana(){}
};


#endif //BANANA.H