/*7. Write a program that asks the user to enter an hour value and a minute value.
The main() function should then pass these two values to a type void function
 that displays the two values in the format shown in the following sample run:
      Enter the number of hours: 9
      Enter the number of minutes: 28
      Time: 9:28
      */

#include <iostream>

void Time(int, int);

int main(void){

int hours,minutes;
std::cout<<"Enter the number of hours: ";
std::cin>>hours;
std::cout<<"Enter the number of minutes: ";
std::cin>>minutes;
Time(hours,minutes);

return 0;
}

void Time(int hours, int minutes){
std::cout<<" Time: "<< hours<<":"<<minutes;
}
