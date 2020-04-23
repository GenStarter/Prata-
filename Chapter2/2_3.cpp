/*3. Write a C++ program that uses three user-defined functions (counting main() as one)
 and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
One function,called two times,should produce the first two lines,
and the remaining function,also called twice,should produce the remaining output.
*/

#include <iostream>

void ThreeMice(void);//prototypes of function
void HowTheyRun(void){
std::cout<<"See how they run\n";
}

int main(void){

ThreeMice();
HowTheyRun();
HowTheyRun();

return 0;
}

void ThreeMice(void){
std::cout<<"Three blind mice\n";
std::cout<<"Three blind mice\n";
}
