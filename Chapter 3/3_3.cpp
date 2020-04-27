/*3. Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic
constants.You should use a separate variable for each input value.A sample
run should look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>

int main(void){
	
std::cout<<" Enter a latitude in degrees, minutes, and seconds: \n First, enter the degrees: ";
double degrees;
std::cin>>degrees;
std::cout<<" Next, enter the minutes of arc: ";
double min_arc;
std::cin>>min_arc;
std::cout<<" Finally, enter the seconds of arc: " ;
double sec;
std::cin>>sec;
std::cout<<degrees<<" degrees, "<<min_arc<<" minutes, "<<sec<<" seconds = "<<((degrees+(min_arc/60)+(sec/3600)) );
	
	return 0;
}
