/* 7. Design a structure called car that holds the following information about an automobile:
   its make,as a string in a character array or in a string object,and the year it was built,
   as an integer.Write a program that asks the user how many cars to catalog.
   The program should then use new to create a dynamic array of that many car structures.
   Next,it should prompt the user to input the make (which might consist of more than one word)
   and year information for each structure.
   Note that this requires some care because it alternates reading strings with numeric data (see Chapter 4).
Finally,it should display the contents of each structure.
A sample run should look something like the following:
   How many cars do you wish to catalog? 2
   Car #1: Please enter the make: Hudson Hornet
   Please enter the year made: 1952
   Car #2: Please enter the make: Kaiser
   Please enter the year made: 1951
   Here is your collection: 1952 Hudson Hornet 1951 Kaiser
*/

#include <iostream>
#include <cstring>

int main(void){

struct car{
char* make;
int year;
};

std::cout<<"How many cars do you wish to catalog? ";
int num_car=0,i;
std::cin>>num_car;
std::cin.get();
car *ycar;
ycar=new car[num_car];

for(i=0;i<num_car;i++){
std::cout<<"Car#"<<(i+1)<<": Please enter the make: "<<std::endl;

char mak[20]={0};

std::cin.getline(mak,20);

n=std::strlen(mak);
int k = sizeof(mak);

std::cout<<"\n n= "<<n<<" "<<(&n)<<std::endl;
std::cout<<"\n k= "<<k<<" "<<(&k)<<std::endl;
ycar[i].make=new char[n+1];
strcpy(ycar[i].make, mak);
std::cout<<"Please enter the year made: ";
std::cin>>ycar[i].year;
std::cin.get();
}

std::cout<<"Here is your collection: \n";
for (i=0;i<num_car;i++)
	std::cout<<ycar[i].make<<" "<<ycar[i].year<<std::endl;

for(i=0;i<num_car;i++)
delete ycar[i].make;

delete []ycar;
return 0;
}
