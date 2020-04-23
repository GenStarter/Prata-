/*5. Write a program that has main() call a user-defined function
that takes a Celsius temperature value as an argument and then returns the equivalent Fahrenheit value.
 The program should request the Celsius value as input from the user and display the result,as shown in the following code:
  Please enter a Celsius value: 20
  20 degrees Celsius is 68 degrees Fahrenheit.
For reference,here is the formula for making the conversion: Fahrenheit = 1.8 × degrees Celsius + 32.0
*/

#include <iostream>

float CtoF(int ); //prototype of user-defined function

int main(void){

int Cels;
float Fahr;
std::cout<<"Please, enter a Celsius value: ";
std::cin>>Cels;
Fahr=CtoF(Cels);
std::cout<<Cels<<" degrees Celsius is "<<Fahr<<" degrees Fahrenheit.";

return 0;
}

float CtoF(int Cels){
float Fah;
Fah =1.8*Cels + 32.0;
return Fah;
}
