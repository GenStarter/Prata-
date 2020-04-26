/*1. Write a short program that asks for your height in integer inches and then converts your height to feet and inches.
Have the program use the underscore character to indicate where to type the response.
Also use a const symbolic constant to represent the conversion factor.
*/

#include <iostream>

const int CF=20; //constant

int main(void){

std::cout<<"Please enter your height in inches:___\b\b\b ";
int height;
std::cin>>height;
int feet = height/CF;
int rem_inch=height%CF;
std::cout<<"Your height is "<<feet<<" feet "<<rem_inch<<" inches"<<std::endl;

return 0;
}
