/*5. The Kingdom of Neutronia,where the unit of currency is the tvarp,has the following income tax code:
     First 5,000 tvarps:0% tax
     Next 10,000 tvarps:10% tax
     Next 20,000 tvarps:15% tax
     Tvarps after 35,000:20% tax
     For example,someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 × 0.10 + 20,000 × 0.15 + 3,000 × 0.20,or 4,600 tvarps.
     Write a program that uses a loop to solicit incomes and to report tax owed.
The loop should terminate when the user enters a negative number or non-numeric input.
*/

#include <iostream>
#include <cctype>

int main(void){

std::cout<<"Income tax code:\n"
"First 5,000 tvarps:0% tax\n"
"Next 10,000 tvarps:10% tax\n"
"Next 20,000 tvarps:15% tax\n"
"Tvarps after 35,000:20% tax\n";

int earning;
double tax;
std::cout<<"Please enter your income: ";
std::cin>>earning;

while(isdigit(earning)||earning >0/*(!isalpha(earning)*/){

if(earning>35000)tax=(earning-35000)*0.2+20000*0.15+10000*0.1;
else if(earning>15000&&earning<=35000)tax=(earning-15000)*0.15+10000*0.1;
else if(earning>5000 && earning<=15000)tax=(earning-5000)*0.1;
else tax=0;
std::cout<<"Your tax = "<<tax<<std::endl<<"________________"<<std::endl;

std::cout<<"Please enter your income(if you want to quit please enter negative number or non-numeric input: ";
std::cin>>earning;

}

return 0;
}
