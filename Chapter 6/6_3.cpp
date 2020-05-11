/*3. Write a precursor to a menu-driven program.
The program should display a menu offering four choices,each labeled with a letter.
If the user responds with a letter other than one of the four valid choices,
the program should prompt the user to enter a valid response until the user complies.
Then the program should use a switch to select a simple action based on the user’s selection.
A program run could look something like this:
    Please enter one of the following choices:
        c) carnivore           p) pianist t) tree                g) game
        f
        Please enter a c, p, t, or g: q
        Please enter a c, p, t, or g: t
        A maple is a tree.
*/

#include <iostream>

int main(void){

char ch;
std::cout<<"Please enter one of the following choices: "<<std::endl;
std::cout<<"c) carnivore  p) pianist  t) tree   g) game"<<std::endl;
std::cin.get(ch);
while(ch!='n'){
        std::cin.get();
switch(ch){
    case 'c': std::cout<<" The wolf is a carnivore \n";      break;
    case 'p': std::cout<<" Mozart is the pianist \n";        break;
    case 't': std::cout<<" A maple is a tree \n";            break;
    case 'g': std::cout<<" Counter-Strike is a game\n";      break;
    default:  std::cout<<" Please enter a c, p, t, or g: ";
}
std::cin.get(ch);
}

return 0;
}
