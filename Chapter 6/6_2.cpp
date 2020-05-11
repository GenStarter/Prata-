/*2. Write a program that reads up to 10 donation values into an array of double.
(Or,if you prefer,use an array template object.)
The program should terminate input on non-numeric input.
It should report the average of the numbers and also report how many numbers in the array are larger than the average.
*/

#include <iostream>
#include <cctype>

int main(void){

int cnt=0,j,i=0;
double sum=0,aver=0;
double arr[10]={0};
std::cout<<"Please enter the first number:"<<std::endl;
std::cin>>arr[0];

while(!isalpha(arr[i])&& i<10){
        sum+=arr[i];
        aver=(sum/(i+1));
 //       std::cout<<"average "<<aver<<" sum "<<sum<<" arr["<<i<<"]= "<<arr[i]<<std::endl;
        i++;
    std::cout<<"Please enter "<<(i+1)<<" number: ";
    std::cin>>arr[i];
}

for (j=0;j<i;j++){
   if(arr[j]>aver)
        cnt++;
}

std::cout<<"Average is "<<aver<<"\n"<<cnt<<" numbers larger than average";

return 0;
}
