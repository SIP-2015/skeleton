#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
#include "Fruit.h"
#include "Apple.h"
#include "Banana.h"
#include "Orange.h"
#include "Food.h"
#include "IceCream.h"
int main(){
	IceCream icecream;
	Apple apple;
	Orange orange;
	Banana banana;
	cout << icecream.getColor() << " = Depends on Flavor" <<endl;
	cout << apple.getColor() << " = red" << endl;
	cout << banana.getColor() << " = yellow" << endl;
	cout << orange.getColor() << " = orange" << endl;

	Fruit* fruit1 = new Apple("golden", 10);
	Fruit* fruit2= new Apple("green", 10);
	Fruit* fruit3 = new Banana("yellow", 10);
	Fruit* fruit4 = new Orange("orange", 10);
	cout << fruit1->edibleSkin() << " = 1" << endl;
	cout << fruit2->edibleSkin() << " = 1" << endl;
	cout << fruit3->edibleSkin() << " = 0" << endl;
	cout << fruit4->edibleSkin() << " = 0" << endl;

	cout << fruit1->getColor() << " = golden" << endl;
	cout << fruit2->getColor() << " = green" << endl;
	cout << fruit3->getColor() << " = yellow" << endl;
	cout << fruit4->getColor() << " = orange" << endl;

	Food* food1 = new IceCream();
	Food* food2 = new Apple();
	Food* food3 = new Banana();
	Food* food4 = new Orange();
	if ((food1->getColor() == icecream.getColor()) && (food2->getColor() == apple.getColor()) && (food3->getColor() == banana.getColor())
		&& (food4->getColor() == orange.getColor())){
		cout << "Good Job!!!" << endl;
	}

	system("pause");
}
