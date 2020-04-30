/*6. The CandyBar structure contains three members,as described in Programming Exercise 5.
Write a program that creates an array of three CandyBar structures,
initializes them to values of your choice,and then displays the contents of each structure.
*/

#include <iostream>

int main(void){

struct CandyBar{
std::string br_name;
double weight;
int calories;
};
CandyBar strct_arr[3];
strct_arr[0]={"first",1.5,231};
strct_arr[1]={"second",2.4,54};
strct_arr[2]={"third",3.6,732};
std::cout<<strct_arr[0].br_name<<" structure: "<<" weight: "<<strct_arr[0].weight<<", calories: "<<strct_arr[0].calories<<std::endl;
std::cout<<strct_arr[1].br_name<<" structure: "<<" weight: "<<strct_arr[1].weight<<", calories: "<<strct_arr[1].calories<<std::endl;
std::cout<<strct_arr[2].br_name<<" structure: "<<" weight: "<<strct_arr[2].weight<<", calories: "<<strct_arr[2].calories<<std::endl;

return 0;
}
