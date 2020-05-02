/*5. You sell the book C++ for Fools.
Write a program that has you enter a year’s worth of monthly sales (in terms of number of books,not of money).
The program should use a loop to prompt you by month,
using an array of char * (or an array of string objects,if you prefer) initialized to the month strings
and storing the input data in an array of int.
Then,the program should find the sum of the array contents and report the total sales for the year.
*/

#include <iostream>
#include <string.h>

int main(void){

char** month=new char*[12];
//*month=new char[12];
char mont[15];
int num_book[12];
//std string month[12];
int i,sum=0;

for(i=0;i<12;i++){

std::cout<<"Enter month and number of book in it:\n   |  \n";
//mont[i]=new char[15];
std::cin>>mont>>num_book[i];
int n=strlen(mont+1);
month[i]=new char[n+1];
strcpy(month[i],mont);
//std::cin.get();
//int n=strlen((month[i])+1);
//std::cout<<"Length= "<<n<<std::endl;
//std::cout<<"Enter number of books were sold this month: ";
}
for(i=0;i<12;i++)
    sum+=num_book[i];
std::cout<<sum<<" books were sold at this year";
//delete []month;
// release dynamically allocated memory
	for (i=0; i < 12; i++)
		delete [] month[i];// each array of characters

	delete [] month;// the array of pointers

return 0;
}
