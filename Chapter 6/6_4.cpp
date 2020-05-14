/*4. When you join the Benevolent Order of Programmers, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name.Write a program
that can list members by real name, by job title, by secret name, or by a member’s
preference. Base the program on the following structure:
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};
In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alternatives:
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Note that “display by preference” does not mean display the preference member; it
means display the member corresponding to the preference number. For instance, if
preference is 1, choice d would display the programmer’s job title.A sample run
may look something like the following:
Benevolent Order of Programmers Report
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!
*/

#include <iostream>

void GetText(char *f){
//std::cout<<"Fullname:"<<std::endl;
std::cout<<f<<std::endl;
}

int main(void){

const int strsize=20;

// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};

std::cout<<"How many programmers are in Order? ";
int prog_num;
std::cin>>prog_num;
std::cin.get();
bop *arr= new bop[prog_num];

int i;

for(i=0;i<prog_num;i++){
std::cout<<"Enter please the programmer's name: ";
std::cin.getline(arr[i].fullname,strsize);
//std::cin.get();
std::cout<<"Enter please the programmer's title: ";
std::cin.getline(arr[i].title, strsize);
//std::cin.get();
std::cout<<"Enter please the programmer's secret name: ";
std::cin.getline(arr[i].bopname,strsize);
//std::cin.get();

std::cout<<"Enter please the preference(0 = fullname, 1 = title, 2 = bopname): ";
std::cin>>arr[i].preference;
std::cout<<arr[i].preference<<std::endl;
while(arr[i].preference<0 || arr[i].preference>2){
    std::cout<<"Enter please the preference(0 = fullname, 1 = title, 2 = bopname): ";
    std::cin>>arr[i].preference;
}

std::cin.get();
}

std::cout<<"Benevolent Order of Programmers Report \na. display by name b. display by title \n";
std::cout<<"c. display by bopname d. display by preference \nq. quit";

char ch;
std::cin.get(ch);
while(ch!='q'){
switch(ch){
case 'a': for(i=0;i<prog_num;i++)GetText((arr+i)->fullname);break;
case 'b': for(i=0;i<prog_num;i++)GetText((arr+i)->title);break;
case 'c': for(i=0;i<prog_num;i++)GetText((arr+i)->bopname);break;
case 'd': for(i=0;i<prog_num;i++)if((arr+i)->preference==0)GetText((arr+i)->fullname);
                                  else if((arr+i)->preference==1)GetText((arr+i)->title);
                                  else GetText((arr+i)->bopname);
                                  break;
default: std::cout<<"Please repeat your answer and be attentive\n";
}
std::cin.get(ch);
}

delete []arr;
return 0;
}
