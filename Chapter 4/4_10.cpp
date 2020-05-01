/*10. Write a program that requests the user to enter three times
for the 40-yd dash (or 40-meter,if you prefer)
 and then displays the times and the average.
 Use an array object to hold the data.
(Use a built-in array if array is not available.)
*/

#include <iostream>
//#include <array>
#include <vector>

int main(void){

std::cout<<"Please enter your times for the 40-yd dash: ";
//std::array<double, 3> arrtime;
std::vector <double>arrtime(3);
std::cin>>arrtime[0]>>arrtime[1]>>arrtime[2];
double arr_aver=(arrtime[0]+arrtime[1]+arrtime[2])/3;
std::cout<<"Times: "<< arrtime[0]<<", "<<arrtime[1]<<", "<<arrtime[2]<<std::endl;
std::cout<<"Average time: "<<arr_aver;

return 0;
}
