//. Write a C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)
#include <iostream>

int main(void){

int yards, furlongs;
std::cout<<"Please, enter a number of furlongs: ";
std::cin>>furlongs;//input
yards=furlongs*220;
std::cout<<furlongs<<"furlongs = "<<yards<<" yards"<<std::endl;

return 0;

}
