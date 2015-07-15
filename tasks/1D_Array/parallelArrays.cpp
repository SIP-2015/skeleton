#include <iostream>

using namespace std;


const int employee = 2;

void getData(int);
void collectData();
void printData();
void printEmployee(int);
int payRate[employee];
string name[employee];
bool working[employee];

//write a funtion that will
//get information listed above 
//make sure that you are only doing
//one employee information at a time 
void getData(int num)
{
  if(num >= employee)
    {
      cout<< "i did noting"<<endl;
      return;
    }
  else
    {
      char temp;
      cout << "please give me payrate"<<endl;
      cin  >> payRate[num];

      cout << "please give me name "<<endl;
      cin  >> name[num];

      cout << "are they still working?(T/F)"<<endl;
      cin  >> temp;
      if(temp =='T')
	{working[num] = true;}
      else
	{working[num] = false;}
    }

}

//write a loop too collect all the data and store it in an array 
// you may use getData
void collectData()
{
  for(int i=0; i<employee; i++)
    {
      cout <<endl<<"please give me employee data" <<endl;
      getData(i);
    }
}

//wirte a funtion that will print the
//information for one empoyee(the one
//you give the number for)   

void printEmployee(int num)
{
  cout<< endl;
  cout<< "empoyee number " << num<<endl; 
  cout<< "pay rate       " << payRate[num]<<endl;
  cout<< "name           " << name[num]   <<endl;
  cout<< "working        " << working[num]<<endl;
}

//write a loop to print all the information collected. 
//you may use print employee 
void printData()
{
  for(int i=0; i<employee; i++)
    {
      
      printEmployee(i);
    }
}



int main()
{
  collectData();
  printData();
}
