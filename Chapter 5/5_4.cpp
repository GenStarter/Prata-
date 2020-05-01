/*4. Daphne invests $100 at 10% simple interest.
That is,every year,the investment earns 10% of the original investment,
or $10 each and every year: interest = 0.10 × original balance
At the same time,Cleo invests $100 at 5% compound interest.
That is,interest is 5% of the current balance,
including previous additions of interest: interest = 0.05 × current balance Cleo earns 5% of $100 the first year,giving her $105.
The next year she earns 5% of $105,or $5.25,and so on.
Write a program that finds how many years it takes for the value of Cleo’s investment to exceed the value of Daphne’s investment
and then displays the value of both investments at that time.
*/

#include <iostream>

int main(void){

double daf_inv=100, cleo_inv=100;
int n=0;
do{
        n++;
    daf_inv+=10;
    cleo_inv*=1.05;
    std::cout<<n<<"year: Daphne investment = "<<daf_inv<<"Cleo's investment = "<<cleo_inv<<std::endl;
}while(daf_inv>cleo_inv);

return 0;
}
