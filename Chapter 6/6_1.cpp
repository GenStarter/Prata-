/*1. Write a program that reads keyboard input to the @ symbol and that echoes the input except for digits,
converting each uppercase character to lowercase,and vice versa.
(Don’t forget the cctype family.)
*/

#include <iostream>
#include <cctype>

int main(void){

char ch;
std::cout<<"Enter please symbols:"<<std::endl;
std::cin.get(ch);
while(ch!='@'){
    if(!isdigit(ch)){
    if(islower(ch))
        ch=toupper(ch);
        else if(isupper(ch))
            ch=tolower(ch);
    std::cout<<ch;
    }
    else std::cin.get();
    std::cin.get(ch);
}
return 0;
}
