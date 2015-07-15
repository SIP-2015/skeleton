#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

int main(){
	string line;
	fstream readfile;
	fstream writefile ("Test.txt");
	readfile.open("Problem_Set.txt");
	//writefile.open("Problem_Set_Ans.txt");
	writefile.open("Test.txt");
	writefile.clear();
	while (!(readfile.eof())){
		getline(readfile, line);
		if (line != ""){
			writefile << line << " ";
			if (line[2] == '+'){
				writefile << atof(&line[0]) + atof(&line[4]) << endl;
			}
			else if (line[2] == '-'){
				writefile << atof(&line[0]) - atof(&line[4]) << endl;
			}
			else if (line[2] == '*' || line[2] == 'x'){
				writefile << atof(&line[0]) * atof(&line[4]) << endl;
			}
			else if (line[2] == '/'){
				if (atof(&line[4]) == 0){
					writefile << "Undefined" << endl;
				}
				else{
					writefile << atof(&line[0]) / atof(&line[4]) << endl;
				}
			}
			else{
				writefile << "Improper problem";
			}
		}
	}
	readfile.close();
	writefile.close();
	system("pause");
}