/*9. Write a program that matches the description of the program in Programming Exercise 8,
but use a string class object instead of an array.
Include the string header file and use a relational operator to make the comparison test.
*/

#include <iostream>
#include <string>

int main(void){
//std::string arr[20];//=new char*[1];
std::string *arr;
int count=0;
int i=0;//counter
arr=new std::string[14];
std::cout<<"Please enter the first word:  ";//<<&arr<<" "<<sizeof(arr)<<" "<<sizeof(*arr);
//std::cin.getline(arr[i],20);
//std::cin.get();
std::cin>>arr[i];
std::cout<<"arr["<<i<<"]= "<<arr[i]<<std::endl;
//std::getline(std::cin,*(arr[i]));
while ((arr[i].compare("done")!=0)){
        std::cout<<" i = "<<i<<std::endl;
        i++;
 //       arr[i]=new char[28];
std::string m;
std::cin>>m;
//arr[i]=new std::string[sizeof(m)+1];
//getline(std::cin,m[20]);
//arr[i].copy(m);
arr[i]=m;
}

std::cout<<"You entered a total of "<<i<<" words.";
count=i+1;

delete []arr;
return 0;

}
