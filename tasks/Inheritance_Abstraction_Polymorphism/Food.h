#ifndef FOOD
#define FOOD
#include <iostream>
#include <stdlib.h>
#include <string>

class Food{
	protected:
		string color;
		double weight;
	public:
		string getColor(){ return color; }
		Food(string s = "", double w = 0){ color = s; weight = w; }
		~Food(){}
};


#endif //FOOD
