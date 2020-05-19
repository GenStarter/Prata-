/*6. Put together a program that keeps track of monetary contributions to the Society for the Preservation of Rightful Influence.
It should ask the user to enter the number of contributors and then solicit the user
to enter the name and contribution of each contributor.
The information should be stored in a dynamically allocated array of structures.
Each structure should have two members:
a character array (or else a string object) to store the name
and a double member to hold the amount of the contribution.
After reading all the data,the program should display the names and amounts
donated for all donors who contributed $10,000 or more.
This list should be headed by the label Grand Patrons.After that,the program should list the remaining donors.
That list should be headed Patrons.
If there are no donors in one of the categories,the program should print the word “none.”
Aside from displaying two categories,the program need do no sorting.
*/

#include <iostream>
#include <cstring>

int main(void){

struct contrib{
char* name;
double amount;
};

std::cout<<"Please enter the number of contributors: ";
int cont;
std::cin>>cont;
contrib* arr=new contrib[cont];
*arr={"Step by step", 45};
//arr->name=new char*[cont];
int i,n=0;
std::cin.get();
for(i=0;i<cont;i++){
        std::cout<<"Please enter the name of "<<(i+1)<<"contributor: ";
  //      char arc[]={0};
  //      std::cout<<i<<"a"<<std::endl;
  //    char  arc='a';//=&arr1[];
    //    char ar;
    //    arc=&ar;
//        arc=new char;
 //       std::cin.get(arc);
        arr[i].name=new char[20];
        std::cin.getline(arr[i].name,20);
//std::cout<<i<<"b"<<std::endl;
 //       std::cin.get();
  //      std::cout<<i<<"c"<<std::endl;
 //       arr[i].name=new char[20];
      //  std::cout<<"arr[0].name = "<<sizeof(arr[i].name)<<std::endl;
  //      strcpy((arr+i)->name,&arc);
 //       while(isalpha(arc)||isspace(arc)){
 //            n++;
 //             std::cin.get(arc);
  //          std::cout<<"n= "<<n<<std::endl;
       //     arr[i].name=new char[n+1];
           std::cout<<"Size of memory: "<<sizeof(arr[i].name)<<" "<<sizeof(arr[i].name[n])<<" "<<arr[i].name<<" "<<&arr[i].name<<" "<<*arr[i].name<<std::endl;
  //          strcat((arr+i)->name,&arc);
   //         delete arc;
       //       n++;
   //         std::cin.get(arc);
   //         n++;
    //       std::cin.get();
//        }
        std::cout<<"Please enter the amount of the contrubution: ";
        std::cin>>arr[i].amount;
        std::cin.get();
}

std::cout<<"Grand Patrons:"<<std::endl;
for(i=0;i<cont;i++){
     if((arr+i)->amount>=10000)
            std::cout<<arr[i].name<<" "<<(arr+i)->amount<<std::endl;
        }

std::cout<<"Patrons:"<<std::endl;
 for(i=0;i<cont;i++){
    //    for(n=0;n<sizeof(arr[i].name);n++)
     if((arr+i)->amount<10000)
            std::cout<<arr[i].name<<" "<<(arr+i)->amount<<std::endl;
            delete arr[i].name;
        }

delete []arr;

return 0;
}
