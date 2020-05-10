/*10. Write a program using nested loops that asks the user to enter a value for the
number of rows to display. It should then display that many rows of asterisks, with
one asterisk in the first row, two in the second row, and so on. For each row, the
asterisks are preceded by the number of periods needed to make all the rows
display a total number of characters equal to the number of rows.A sample run
would look like this:
Enter number of rows: 5
....*
...**
..***
.****
*****
*/

#include <iostream>

int main(void){
	
	char a='.';
	char b='*';
  
	int i,j,z,n;
  
	std::cout<<"Enter number of rows: ";
	std::cin>>n;
  
	for(i=0;i<n;i++){
	std::cout<<std::endl;
	for(j=0;j<(n-i-1);j++)
	std::cout<<a;
	for(z=0;z<(i+1);z++)
	std::cout<<b;
}
	return 0;
}
