#ifndef APPLE
#define APPLE

#include "Fruit.h"
#include <iostream>
#include <stdlib.h>
#include <string>

class Apple : public Fruit{
protected:
	string color;
	double weight;
public:
	bool edibleSkin(){ return true;}
	Apple(string s = "red", double w = 0) :Fruit(s, w){}
	~Apple(){}
};


#endif //APPLE