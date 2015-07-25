#ifndef ORANGE
#define ORANGE
#include "Fruit.h"
#include <iostream>
#include <stdlib.h>
#include <string>

class Orange : public Fruit{
protected:
	string color;
	double weight;
public:
	bool edibleSkin(){ return false; }
	Orange(string s = "orange", double w = 0) :Fruit(s, w){}
	~Orange(){}
};


#endif //ORANGE