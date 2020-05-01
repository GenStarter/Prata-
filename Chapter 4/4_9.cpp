/*9. Do Programming Exercise 6,
but instead of declaring an array of three CandyBar structures,
use new to allocate the array dynamically.
*/

#include <iostream>
#include <string>

int main(void){

struct CandyBar{
std::string br_name;
double weight;
int calories;
};
CandyBar *strct_arr=new CandyBar[3];
std::cout<<" Enter brand name | weight | calories \n";
getline(std::cin,strct_arr->br_name);
std::cin>>strct_arr->weight>>strct_arr->calories;
std::cout<<" Enter brand name | weight | calories \n";
std::cin.get();//reading '\n' - end of the previous input
getline(std::cin,(strct_arr+1)->br_name);
std::cin>>(strct_arr+1)->weight>>(strct_arr+1)->calories;
std::cout<<" Enter brand name | weight | calories \n";
std::cin.get();
getline(std::cin,(strct_arr+2)->br_name);
std::cin>>(strct_arr+2)->weight>>(strct_arr+2)->calories;
std::cout<<strct_arr[0].br_name<<" structure: "<<" weight: "<<strct_arr[0].weight<<", calories: "<<strct_arr[0].calories<<std::endl;
std::cout<<strct_arr[1].br_name<<" structure: "<<" weight: "<<strct_arr[1].weight<<", calories: "<<strct_arr[1].calories<<std::endl;
std::cout<<strct_arr[2].br_name<<" structure: "<<" weight: "<<strct_arr[2].weight<<", calories: "<<strct_arr[2].calories<<std::endl;

return 0;
}
