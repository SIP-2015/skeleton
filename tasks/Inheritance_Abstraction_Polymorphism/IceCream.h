#ifndef ICECREAM
#define ICECREAM
#include "Food.h"
#include <iostream>
#include <stdlib.h>
#include <string>

class IceCream : public Food{
protected:
	string color;
	double weight;
public:
	IceCream(string s = "Depends on Flavor", double w = 0) :Food(s, w){}
	~IceCream(){}
};


#endif //ICECREAM