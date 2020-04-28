/*4. Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent
time in days, hours, minutes, and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour, and the number
of seconds in a minute.The output should look like this:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include <iostream>

const int s_p_day=(3600*24);
const int s_p_hour=3600;

int main(void){
	
	std::cout<<" Enter the number of seconds: ";
	long long int sec;
	std::cin>>sec;
	int days = sec/s_p_day;
	int hours= (sec-days*(s_p_day))/3600;
	int minutes=(sec-days*(3600*24)-hours*s_p_hour)/60;
	int seconds=(sec-days*(3600*24)-hours*3600-minutes*60);
	std::cout<<sec<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds";
	
	return 0;
}
