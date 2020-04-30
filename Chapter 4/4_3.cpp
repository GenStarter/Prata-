/*3. Write a program that asks the user to enter his or her first name and then last name,
and that then constructs,stores,and displays a third string,
consisting of the user’s last name followed by a comma,a space,and first name.
Use char arrays and functions from the cstring header file.
A sample run could look like this:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here’s the information in a single string: Fleming, Flip
    */

    #include <iostream>
    #include <cstring>

    int main(void){

    std::cout<<" Enter your first name: ";
    char f_name[15];
    std::cin.getline(f_name,15);
    std::cout<<"  Enter your last name: ";
    char l_name[20];
    std::cin.getline(l_name,20);

   // std::cout<<"Here’s the information in a single string: "<<l_name<<", "<<f_name;
   char third_s[37];
   strcpy(third_s,l_name);
   strcat(third_s,", ");
   strcat(third_s, f_name);
   std::cout<<"Here’s the information in a single string: "<<third_s;

    return 0;
    }
