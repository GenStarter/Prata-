/*4. Write a program that asks the user to enter his or her first name and then last name,
and that then constructs,stores,and displays a third string consisting of the user’s last name
 followed by a comma,a space,and first name.
 Use string objects and methods from the string header file.
 A sample run could look like this:
  Enter your first name: Flip
  Enter your last name: Fleming
  Here’s the information in a single string: Fleming, Flip
  */

  #include <iostream>

  int main(void){

  std::cout<<"Enter your first name: ";
  std::string f_name;
  std::cin>>f_name;
  std::cout<<"Enter your last name: ";
  std::string l_name;
  std::cin>>l_name;

  std::string third_s=l_name+", "+ f_name;
  std::cout<<"Here’s the information in a single string: "<<third_s;

  return 0;
  }
