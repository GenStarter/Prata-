/*6. Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers.
*/

#include <iostream>

int main(void){
	
	std::cout<<"How many miles you have driven: ";
	int miles;
	std::cin>>miles;
	std::cout<<"How many gallons of gasoline you have used: ";
	int gallons;
	std::cin>>gallons;
	std::cout<<"Your car needs "<<(miles/gallons)<<" miles per gallon";
	
	return 0;
}
