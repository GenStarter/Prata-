/*8. Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
You should include the cstring header file and use the strcmp() function to
make the comparison test.
*/

#include <iostream>
#include <cstring>

int main(void){

//std::vector<char*> arr();
char**arr;
int count=0;
int i=0;//counter
arr=new char*[14];
std::cout<<"Please enter the first word:  "<<&arr<<" "<<sizeof(arr)<<" "<<sizeof(*arr);/checkup
std::cin.getline(arr[i],20);
std::cout<<"arr["<<i<<"]= "<<arr[i]<<std::endl;
while (strcmp(*(arr+i),"done")!=0){
        std::cout<<" i = "<<i<<std::endl;
        i++;
        arr[i]=new char[28];
char m[20]={0};
std::cin>>m;
strcpy(*(arr+i),m);
//arr.push_back(m);
}

std::cout<<"You entered a total of "<<(i+1)<<" words.";
count=i+1;
for(i=0;i<count;i++)
    delete []arr[i];
delete []arr;
return 0;
}
*/
