//2. Rewrite Listing 4.4,using the C++ string class instead of char arrays.

// instr2.cpp -- reading more than one word with getline

#include <iostream>

int main(){
     using namespace std;

std::string name;
std::string dessert;
cout << "Enter your name:\n";
getline(cin,name);  // reads through newline
cout << "Enter your favorite dessert:\n";
cin>>dessert;
cout << "I have some delicious " << dessert;
cout << " for you, " << name << ".\n";

 return 0;
}
