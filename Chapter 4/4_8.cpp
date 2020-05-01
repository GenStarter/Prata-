/*8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring a structure variable.
Also have the program request the pizza diameter before it requests the pizza company name.
*/

#include <iostream>
#include <string>

int main(void){

struct pizza{
std::string name_comp;
double diameter;
double weight;
};
pizza *info= new pizza;
std::cout<<"Please enter the diameter of the pizza: ";
std::cin>>info->diameter;
std::cout<<"Please enter the name of the pizza company: ";
std::cin.get();//reading '\n' after cin>>
getline(std::cin,info->name_comp);
std::cout<<"Please enter the weight of the pizza: ";
std::cin>>info->weight;

std::cout<<"Pizza info: \nName: "<<info->name_comp<<"\nDiameter: "<<info->diameter<<"\nWeight: "<<info->weight;
delete info;

return 0;
}
