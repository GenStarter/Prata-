/*3. Write a program that asks the user to type in numbers.
After each entry,the program should report the cumulative sum of the entries to date.
The program should terminate when the user enters 0.
*/

#include <iostream>

int main(void){
int num,sum=0;

while(num!=0){
std::cout<<"Please enter the number: ";
std::cin>>num;
sum+=num;
std::cout<<"Summa = "<<sum<<std::endl;
}

return 0;
}
