/*1. Write a program that requests the user to enter two integers.
The program should then calculate and report the sum of all the integers between and including the two integers.
At this point,assume that the smaller integer is entered first.
For example,if the user enters 2 and 9,the program should report that the sum of all the integers from 2 through 9 is 44.
*/

#include <iostream>

int main(void){

std::cout<<"Enter please the int numbers: ";
int i,beg,fin,sum;
std::cin>>beg>>fin;
sum=beg;
for(i=beg;i<(fin);++i){
        beg++;
    sum+=beg;
std::cout<<sum<<" "<<beg<<std::endl;
}


return 0;
}
