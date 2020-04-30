/*7. William Wingate runs a pizza-analysis service.
For each pizza,he needs to record the following information:
    The name of the pizza company,which can consist of more than one word
    The diameter of the pizza
    The weight of the pizza
    Devise a structure that can hold this information and write a program that uses a structure variable of that type.
    The program should ask the user to enter each of the preceding items of information,
and then the program should display that information.Use cin (or its methods) and cout.
*/

#include <iostream>

int main(void){

struct pizza{
std::string name_comp;
double diameter;
double weight;
};
pizza info;
std::cout<<"Please enter the name of the pizza company: ";
getline(std::cin,info.name_comp);
std::cout<<"Please enter the diameter of the pizza company: ";
std::cin>>info.diameter;
std::cout<<"Please enter the weight of the pizza company: ";
std::cin>>info.weight;

std::cout<<"Pizza info: \n"<<"Name: "<<info.name_comp<<"\n"<<"Diameter: "<<info.diameter<<"\n"<<"Weight: "<<info.weight;

return 0;
}
